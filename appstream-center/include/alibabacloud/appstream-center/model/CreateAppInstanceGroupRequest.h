/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT CreateAppInstanceGroupRequest : public RpcServiceRequest {
public:
	struct RuntimePolicy {
		std::string sessionType;
		std::string debugMode;
	};
	struct Network {
		struct RoutesItem {
			std::string mode;
			std::string destination;
		};
		RoutesItem routesItem;
		std::vector<RoutesItem> routes;
		std::string strategyType;
	};
	struct UserInfo {
		std::string type;
	};
	struct NodePool {
		struct RecurrenceSchedulesItem {
			int integer;
			std::vector<int> recurrenceValues;
			std::string recurrenceType;
			struct TimerPeriodsItem {
				int amount;
				std::string endTime;
				std::string startTime;
			};
			TimerPeriodsItem timerPeriodsItem;
			std::vector<TimerPeriodsItem> timerPeriods;
		};
		RecurrenceSchedulesItem recurrenceSchedulesItem;
		std::vector<RecurrenceSchedulesItem> recurrenceSchedules;
		int nodeAmount;
		int scalingStep;
		std::string strategyDisableDate;
		std::string nodeInstanceType;
		int scalingDownAfterIdleMinutes;
		std::string strategyType;
		int maxScalingAmount;
		bool warmUp;
		std::string scalingUsageThreshold;
		int nodeCapacity;
		std::string strategyEnableDate;
	};
	struct SecurityPolicy {
		bool resetAfterUnbind;
	};
	struct VideoPolicy {
		bool webrtc;
		bool terminalResolutionAdaptive;
		int frameRate;
		int sessionResolutionWidth;
		std::string streamingMode;
		int sessionResolutionHeight;
	};
	CreateAppInstanceGroupRequest();
	~CreateAppInstanceGroupRequest();
	RuntimePolicy getRuntimePolicy() const;
	void setRuntimePolicy(const RuntimePolicy &runtimePolicy);
	std::string getBizRegionId() const;
	void setBizRegionId(const std::string &bizRegionId);
	int getScalingStep() const;
	void setScalingStep(int scalingStep);
	int getScalingDownAfterIdleMinutes() const;
	void setScalingDownAfterIdleMinutes(int scalingDownAfterIdleMinutes);
	int getMinAmount() const;
	void setMinAmount(int minAmount);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	Network getNetwork() const;
	void setNetwork(const Network &network);
	int getReserveMinAmount() const;
	void setReserveMinAmount(int reserveMinAmount);
	int getSessionTimeout() const;
	void setSessionTimeout(int sessionTimeout);
	std::string getChargeResourceMode() const;
	void setChargeResourceMode(const std::string &chargeResourceMode);
	std::string getAppCenterImageId() const;
	void setAppCenterImageId(const std::string &appCenterImageId);
	std::string getScalingUsageThreshold() const;
	void setScalingUsageThreshold(const std::string &scalingUsageThreshold);
	UserInfo getUserInfo() const;
	void setUserInfo(const UserInfo &userInfo);
	std::string getReserveAmountRatio() const;
	void setReserveAmountRatio(const std::string &reserveAmountRatio);
	std::string getPreOpenAppId() const;
	void setPreOpenAppId(const std::string &preOpenAppId);
	int getAmount() const;
	void setAmount(int amount);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	NodePool getNodePool() const;
	void setNodePool(const NodePool &nodePool);
	std::string getAppInstanceType() const;
	void setAppInstanceType(const std::string &appInstanceType);
	int getMaxAmount() const;
	void setMaxAmount(int maxAmount);
	SecurityPolicy getSecurityPolicy() const;
	void setSecurityPolicy(const SecurityPolicy &securityPolicy);
	std::string getPromotionId() const;
	void setPromotionId(const std::string &promotionId);
	std::vector<std::string> getUsers() const;
	void setUsers(const std::vector<std::string> &users);
	VideoPolicy getVideoPolicy() const;
	void setVideoPolicy(const VideoPolicy &videoPolicy);
	std::string getAppInstanceGroupName() const;
	void setAppInstanceGroupName(const std::string &appInstanceGroupName);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	int getReserveMaxAmount() const;
	void setReserveMaxAmount(int reserveMaxAmount);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getStrategyType() const;
	void setStrategyType(const std::string &strategyType);

private:
	RuntimePolicy runtimePolicy_;
	std::string bizRegionId_;
	int scalingStep_;
	int scalingDownAfterIdleMinutes_;
	int minAmount_;
	std::string productType_;
	Network network_;
	int reserveMinAmount_;
	int sessionTimeout_;
	std::string chargeResourceMode_;
	std::string appCenterImageId_;
	std::string scalingUsageThreshold_;
	UserInfo userInfo_;
	std::string reserveAmountRatio_;
	std::string preOpenAppId_;
	int amount_;
	int period_;
	bool autoPay_;
	NodePool nodePool_;
	std::string appInstanceType_;
	int maxAmount_;
	SecurityPolicy securityPolicy_;
	std::string promotionId_;
	std::vector<std::string> users_;
	VideoPolicy videoPolicy_;
	std::string appInstanceGroupName_;
	std::string periodUnit_;
	int reserveMaxAmount_;
	bool autoRenew_;
	std::string chargeType_;
	std::string strategyType_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPREQUEST_H_
