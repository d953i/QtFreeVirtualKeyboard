#ifndef INPUTPANELIFACE_HPP
#define INPUTPANELIFACE_HPP

#include <QColor>
#include <QObject>

/*!
 * \brief The InputPanelIface class contains properties shared between the keyboards component.
 */
class InputPanelIface : public QObject
{
    Q_OBJECT

    // clang-format off
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged)
    Q_PROPERTY(QColor btnBackgroundColor READ btnBackgroundColor WRITE setBtnBackgroundColor NOTIFY btnBackgroundColorChanged)
    Q_PROPERTY(QColor btnTextColor READ btnTextColor WRITE setBtnTextColor NOTIFY btnTextColorChanged)
    Q_PROPERTY(QString btnTextFontFamily READ btnTextFontFamily WRITE setBtnTextFontFamily NOTIFY btnTextFontFamilyChanged)
    Q_PROPERTY(QString backspaceIcon READ backspaceIcon WRITE setBackspaceIcon NOTIFY backspaceIconChanged)
    Q_PROPERTY(QString shiftOnIcon READ shiftOnIcon WRITE setShiftOnIcon NOTIFY shiftOnIconChanged)
    Q_PROPERTY(QString shiftOffIcon READ shiftOffIcon WRITE setShiftOffIcon NOTIFY shiftOffIconChanged)
    Q_PROPERTY(QString hideKeyboardIcon READ hideKeyboardIcon WRITE setHideKeyboardIcon NOTIFY hideKeyboardIconChanged)
    // clang-format on

public:
    explicit InputPanelIface(QObject *parent = nullptr);
    ~InputPanelIface();

    QColor backgroundColor() const;
    void setBackgroundColor(const QColor &backgroundColor);

    QColor btnBackgroundColor() const;
    void setBtnBackgroundColor(const QColor &btnBackgroundColor);

    QColor btnTextColor() const;
    void setBtnTextColor(const QColor &btnTextColor);

    QString btnTextFontFamily() const;
    void setBtnTextFontFamily(const QString &btnTextFontFamily);

    QString backspaceIcon() const;
    void setBackspaceIcon(const QString &backspaceIcon);

    QString shiftOnIcon() const;
    void setShiftOnIcon(const QString &shiftOnIcon);

    QString shiftOffIcon() const;
    void setShiftOffIcon(const QString &shiftOffIcon);

    QString hideKeyboardIcon() const;
    void setHideKeyboardIcon(const QString &hideKeyboardIcon);

signals:
    void backgroundColorChanged();
    void btnBackgroundColorChanged();
    void btnTextColorChanged();
    void btnTextFontFamilyChanged();
    void backspaceIconChanged();
    void shiftOnIconChanged();
    void shiftOffIconChanged();
    void hideKeyboardIconChanged();

private:
    struct InputPanelIfacePrivate;
    InputPanelIfacePrivate *pimpl;
};

#endif // INPUTPANELIFACE_HPP
