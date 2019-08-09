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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENSRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT DescribeCensResult : public ServiceResult
			{
			public:
				struct Cen
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string protectionLevel;
					std::string description;
					std::string cenId;
					std::string creationTime;
					std::vector<std::string> cenBandwidthPackageIds;
					std::vector<Cen::Tag> tags;
					std::string name;
				};


				DescribeCensResult();
				explicit DescribeCensResult(const std::string &payload);
				~DescribeCensResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Cen> getCens()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Cen> cens_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENSRESULT_H_