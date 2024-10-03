import "./Navbar.css";
import {
  MdDashboard,
  MdFlightTakeoff,
  MdAltRoute,
  MdPeople,
  MdScheduleSend,
  MdBookmarks,
  MdOnlinePrediction,
  MdOutlineSettings,
  MdOutlineLogout,
} from "react-icons/md";

const Navbar = () => {
  return (
    <div className="Navbar">
      <h1 className="navbar-title bebas-neue-regular">Vanguard Air</h1>
      <ul className="navbar-items ubuntu-condensed-regular">
        <li className="navbar-item">
          Dashboard
          <span className="navbar-item-icon">
            <MdDashboard />
          </span>
        </li>
        <li className="navbar-item">
          Flights
          <span className="navbar-item-icon">
            <MdFlightTakeoff />
          </span>
        </li>
        <li className="navbar-item">
          Routes
          <span className="navbar-item-icon">
            <MdAltRoute />
          </span>
        </li>
        <li className="navbar-item">
          Pilots
          <span className="navbar-item-icon">
            <MdPeople />
          </span>
        </li>
        <li className="navbar-item">
          Schedules
          <span className="navbar-item-icon">
            <MdScheduleSend />
          </span>
        </li>
        <li className="navbar-item">
          Bookings
          <span className="navbar-item-icon">
            <MdBookmarks />
          </span>
        </li>
        <li className="navbar-item">
          NOTAMs
          <span className="navbar-item-icon">
            <MdOnlinePrediction />
          </span>
        </li>
        <li className="navbar-item">
          Settings
          <span className="navbar-item-icon">
            <MdOutlineSettings />
          </span>
        </li>
      </ul>
      <div className="navbar-profile-status-con ubuntu-condensed-regular">
        <p className="navbar-profile-status-message">Welcome, Sami M.</p>
        <button className="navbar-profile-status-button">
          Logout
          <span className="navbar-profile-status-button-icon">
            <MdOutlineLogout />
          </span>
        </button>
      </div>
    </div>
  );
};

export default Navbar;
