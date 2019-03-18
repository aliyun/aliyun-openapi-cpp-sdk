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

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAIPCITYRESULT_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAIPCITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeCaptchaIpCityResult : public ServiceResult
			{
			public:
				struct CaptchaCitie
				{
					std::string lng;
					int pv;
					std::string lat;
					std::string location;
				};
				struct CaptchaIp
				{
					std::string ip;
					int value;
				};


				DescribeCaptchaIpCityResult();
				explicit DescribeCaptchaIpCityResult(const std::string &payload);
				~DescribeCaptchaIpCityResult();
				std::vector<CaptchaIp> getCaptchaIps()const;
				std::vector<CaptchaCitie> getCaptchaCities()const;
				std::string getBizCode()const;
				bool getHasData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CaptchaIp> captchaIps_;
				std::vector<CaptchaCitie> captchaCities_;
				std::string bizCode_;
				bool hasData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHAIPCITYRESULT_H_