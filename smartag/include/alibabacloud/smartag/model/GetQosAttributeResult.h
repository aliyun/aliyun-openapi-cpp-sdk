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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_GETQOSATTRIBUTERESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_GETQOSATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT GetQosAttributeResult : public ServiceResult
			{
			public:
				struct QosPolicy
				{
					std::string destCidr;
					long endTime;
					std::string sourcePortRange;
					std::string sourceCidr;
					int priority;
					std::string qosPolicieDescription;
					std::string qosPolicieName;
					long startTime;
					std::string ipProtocol;
					std::string destPortRange;
				};
				struct QosCar
				{
					int minBandwidthAbs;
					std::string qosCarId;
					int maxBandwidthAbs;
					int maxBandwidthPercent;
					std::string qosCarDescription;
					int priority;
					std::string qosCarName;
					std::string percentSourceType;
					int minBandwidthPercent;
					std::string limitType;
				};


				GetQosAttributeResult();
				explicit GetQosAttributeResult(const std::string &payload);
				~GetQosAttributeResult();
				std::vector<QosPolicy> getQosPolicies()const;
				std::vector<QosCar> getQosCars()const;
				int getErrorConfigSmartAGCount()const;
				std::string getQosName()const;
				std::string getQosDescription()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<QosPolicy> qosPolicies_;
				std::vector<QosCar> qosCars_;
				int errorConfigSmartAGCount_;
				std::string qosName_;
				std::string qosDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_GETQOSATTRIBUTERESULT_H_