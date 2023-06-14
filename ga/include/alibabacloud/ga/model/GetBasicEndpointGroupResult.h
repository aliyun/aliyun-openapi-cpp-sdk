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

#ifndef ALIBABACLOUD_GA_MODEL_GETBASICENDPOINTGROUPRESULT_H_
#define ALIBABACLOUD_GA_MODEL_GETBASICENDPOINTGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT GetBasicEndpointGroupResult : public ServiceResult
			{
			public:


				GetBasicEndpointGroupResult();
				explicit GetBasicEndpointGroupResult(const std::string &payload);
				~GetBasicEndpointGroupResult();
				std::string getEndpointGroupRegion()const;
				std::string getEndpointGroupId()const;
				std::string getDescription()const;
				std::string getState()const;
				std::string getEndpointType()const;
				std::string getEndpointSubAddress()const;
				std::string getAcceleratorId()const;
				std::string getName()const;
				std::string getEndpointAddress()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endpointGroupRegion_;
				std::string endpointGroupId_;
				std::string description_;
				std::string state_;
				std::string endpointType_;
				std::string endpointSubAddress_;
				std::string acceleratorId_;
				std::string name_;
				std::string endpointAddress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_GETBASICENDPOINTGROUPRESULT_H_