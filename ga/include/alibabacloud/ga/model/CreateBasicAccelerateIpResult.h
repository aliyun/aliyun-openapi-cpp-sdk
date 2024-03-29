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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPRESULT_H_
#define ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT CreateBasicAccelerateIpResult : public ServiceResult
			{
			public:


				CreateBasicAccelerateIpResult();
				explicit CreateBasicAccelerateIpResult(const std::string &payload);
				~CreateBasicAccelerateIpResult();
				std::string getIpSetId()const;
				std::string getAccelerateIpId()const;
				std::string getAccelerateIpAddress()const;
				std::string getState()const;
				std::string getAcceleratorId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string ipSetId_;
				std::string accelerateIpId_;
				std::string accelerateIpAddress_;
				std::string state_;
				std::string acceleratorId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_CREATEBASICACCELERATEIPRESULT_H_