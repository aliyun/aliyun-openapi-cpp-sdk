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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPENDPOINTRELATIONRESULT_H_
#define ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPENDPOINTRELATIONRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT CreateBasicAccelerateIpEndpointRelationResult : public ServiceResult
			{
			public:


				CreateBasicAccelerateIpEndpointRelationResult();
				explicit CreateBasicAccelerateIpEndpointRelationResult(const std::string &payload);
				~CreateBasicAccelerateIpEndpointRelationResult();
				std::string getAccelerateIpId()const;
				std::string getState()const;
				std::string getEndpointId()const;
				std::string getAcceleratorId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accelerateIpId_;
				std::string state_;
				std::string endpointId_;
				std::string acceleratorId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPENDPOINTRELATIONRESULT_H_