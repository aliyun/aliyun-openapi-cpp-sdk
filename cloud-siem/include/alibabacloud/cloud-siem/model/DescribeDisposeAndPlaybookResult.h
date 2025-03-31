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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDISPOSEANDPLAYBOOKRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDISPOSEANDPLAYBOOKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloud-siem/Cloud_siemExport.h>

namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeDisposeAndPlaybookResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PageInfo
					{
						long totalCount;
						int pageSize;
						int currentPage;
					};
					struct ResponseDataItem
					{
						struct PlaybookListItem
						{
							std::string description;
							std::string uuid;
							bool wafPlaybook;
							std::string opCode;
							std::string displayName;
							std::string opLevel;
							std::string taskConfig;
							std::string available;
							std::vector<std::string> paramConfig;
							std::string name;
						};
						long entityId;
						std::string entityType;
						std::vector<std::string> opcodeSet;
						std::string dispose;
						std::vector<std::string> scope;
						std::string entityInfo;
						int alertNum;
						std::string opcodeMap;
						std::vector<ResponseDataItem::PlaybookListItem> playbookList;
					};
					PageInfo pageInfo;
					std::vector<ResponseDataItem> responseData;
				};


				DescribeDisposeAndPlaybookResult();
				explicit DescribeDisposeAndPlaybookResult(const std::string &payload);
				~DescribeDisposeAndPlaybookResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEDISPOSEANDPLAYBOOKRESULT_H_