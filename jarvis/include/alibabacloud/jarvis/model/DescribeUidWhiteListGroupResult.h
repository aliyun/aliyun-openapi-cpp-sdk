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

#ifndef ALIBABACLOUD_JARVIS_MODEL_DESCRIBEUIDWHITELISTGROUPRESULT_H_
#define ALIBABACLOUD_JARVIS_MODEL_DESCRIBEUIDWHITELISTGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/jarvis/JarvisExport.h>

namespace AlibabaCloud
{
	namespace Jarvis
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_EXPORT DescribeUidWhiteListGroupResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int pageSize;
					int currentPage;
					int total;
				};
				struct Data
				{
					struct Item
					{
						std::string iP;
						std::string regionId;
					};
					std::string status;
					std::string gmtCreate;
					std::string gmtRealExpire;
					std::vector<Data::Item> items;
					std::string srcUid;
					int autoConfig;
					int groupId;
				};


				DescribeUidWhiteListGroupResult();
				explicit DescribeUidWhiteListGroupResult(const std::string &payload);
				~DescribeUidWhiteListGroupResult();
				std::vector<std::string> getProductList()const;
				std::vector<Data> getDataList()const;
				PageInfo getPageInfo()const;
				std::string getModule()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> productList_;
				std::vector<Data> dataList_;
				PageInfo pageInfo_;
				std::string module_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_MODEL_DESCRIBEUIDWHITELISTGROUPRESULT_H_