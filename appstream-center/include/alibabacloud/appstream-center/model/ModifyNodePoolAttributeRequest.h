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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTEREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ModifyNodePoolAttributeRequest : public RpcServiceRequest {
public:
	struct NodePoolStrategy {
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
		int scalingStep;
		std::string strategyDisableDate;
		int scalingDownAfterIdleMinutes;
		std::string strategyType;
		int maxScalingAmount;
		bool warmUp;
		std::string scalingUsageThreshold;
		std::string strategyEnableDate;
	};
	ModifyNodePoolAttributeRequest();
	~ModifyNodePoolAttributeRequest();
	std::string getBizRegionId() const;
	void setBizRegionId(const std::string &bizRegionId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getPoolId() const;
	void setPoolId(const std::string &poolId);
	NodePoolStrategy getNodePoolStrategy() const;
	void setNodePoolStrategy(const NodePoolStrategy &nodePoolStrategy);
	int getNodeCapacity() const;
	void setNodeCapacity(int nodeCapacity);

private:
	std::string bizRegionId_;
	std::string productType_;
	std::string poolId_;
	NodePoolStrategy nodePoolStrategy_;
	int nodeCapacity_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTEREQUEST_H_
