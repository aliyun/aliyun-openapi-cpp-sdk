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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDDOSTRAFFICINFORESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDDOSTRAFFICINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnDDoSTrafficInfoResult : public ServiceResult
			{
			public:
				struct TimeScope
				{
					std::string start;
					std::string interval;
				};


				DescribeScdnDDoSTrafficInfoResult();
				explicit DescribeScdnDDoSTrafficInfoResult(const std::string &payload);
				~DescribeScdnDDoSTrafficInfoResult();
				std::vector<TimeScope> getTimeScopes()const;
				std::vector<std::string> getBpsDrops()const;
				std::vector<std::string> getPpsDrops()const;
				std::vector<std::string> getBpsTotals()const;
				std::vector<std::string> getPpsTotals()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TimeScope> timeScopes_;
				std::vector<std::string> bpsDrops_;
				std::vector<std::string> ppsDrops_;
				std::vector<std::string> bpsTotals_;
				std::vector<std::string> ppsTotals_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDDOSTRAFFICINFORESULT_H_