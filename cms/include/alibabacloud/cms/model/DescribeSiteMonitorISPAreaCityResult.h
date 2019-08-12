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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORISPAREACITYRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORISPAREACITYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeSiteMonitorISPAreaCityResult : public ServiceResult
			{
			public:
				struct IspCity
				{
					std::string ispName;
					std::string isp;
					std::string country;
					std::string region;
					std::string city;
					std::string cityName;
				};


				DescribeSiteMonitorISPAreaCityResult();
				explicit DescribeSiteMonitorISPAreaCityResult(const std::string &payload);
				~DescribeSiteMonitorISPAreaCityResult();
				std::string getMessage()const;
				std::string getData()const;
				std::string getCode()const;
				std::vector<IspCity> getIspCityList()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string data_;
				std::string code_;
				std::vector<IspCity> ispCityList_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBESITEMONITORISPAREACITYRESULT_H_