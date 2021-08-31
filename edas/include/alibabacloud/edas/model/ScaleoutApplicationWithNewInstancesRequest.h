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

#ifndef ALIBABACLOUD_EDAS_MODEL_SCALEOUTAPPLICATIONWITHNEWINSTANCESREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_SCALEOUTAPPLICATIONWITHNEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ScaleoutApplicationWithNewInstancesRequest : public RoaServiceRequest
			{

			public:
				ScaleoutApplicationWithNewInstancesRequest();
				~ScaleoutApplicationWithNewInstancesRequest();

				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				std::string getTemplateInstanceId()const;
				void setTemplateInstanceId(const std::string& templateInstanceId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getInstanceChargePeriodUnit()const;
				void setInstanceChargePeriodUnit(const std::string& instanceChargePeriodUnit);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getScalingNum()const;
				void setScalingNum(int scalingNum);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getScalingPolicy()const;
				void setScalingPolicy(const std::string& scalingPolicy);
				std::string getTemplateVersion()const;
				void setTemplateVersion(const std::string& templateVersion);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getInstanceChargePeriod()const;
				void setInstanceChargePeriod(int instanceChargePeriod);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);

            private:
				int autoRenewPeriod_;
				std::string templateInstanceId_;
				std::string groupId_;
				std::string instanceChargePeriodUnit_;
				std::string clusterId_;
				int scalingNum_;
				std::string templateId_;
				std::string scalingPolicy_;
				std::string templateVersion_;
				bool autoRenew_;
				std::string appId_;
				int instanceChargePeriod_;
				std::string instanceChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_SCALEOUTAPPLICATIONWITHNEWINSTANCESREQUEST_H_