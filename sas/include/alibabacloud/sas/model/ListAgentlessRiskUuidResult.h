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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSRISKUUIDRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSRISKUUIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ListAgentlessRiskUuidResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
				};
				struct ListItem
				{
					std::string instanceName;
					std::string uuid;
					std::string internetIp;
					int maliciousCount;
					int baselineCount;
					std::string targetName;
					long scanTime;
					std::string intranetIp;
					std::string targetId;
					int vulCount;
				};


				ListAgentlessRiskUuidResult();
				explicit ListAgentlessRiskUuidResult(const std::string &payload);
				~ListAgentlessRiskUuidResult();
				PageInfo getPageInfo()const;
				std::vector<ListItem> getList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<ListItem> list_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSRISKUUIDRESULT_H_