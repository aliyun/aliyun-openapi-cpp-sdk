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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTINTERCEPTIONHISTORYRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTINTERCEPTIONHISTORYRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT ListInterceptionHistoryResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct InterceptionHistory
				{
					long ruleId;
					std::string srcTagList;
					long interceptionName;
					std::string dstAppName;
					std::string realDstAppName;
					std::string realDstNamespace;
					std::string srcImageList;
					std::string clusterName;
					std::string dstTagList;
					std::string srcNamespace;
					std::string realDstPodName;
					std::string ruleName;
					int interceptionType;
					long status;
					int realInterceptionType;
					std::string realSrcAppName;
					long firstTime;
					std::string clusterId;
					std::string dstRuleTargetName;
					std::string srcAppName;
					std::string realSrcImageName;
					long dstPort;
					std::string realSrcPodName;
					int tryCount;
					std::string realSrcNamespace;
					std::string srcRuleTargetName;
					std::string realDstImageName;
					long id;
					long riskLevel;
					std::string dstImageList;
					std::string dstNamespace;
					long lastTime;
				};


				ListInterceptionHistoryResult();
				explicit ListInterceptionHistoryResult(const std::string &payload);
				~ListInterceptionHistoryResult();
				std::vector<InterceptionHistory> getInterceptionHistoryList()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InterceptionHistory> interceptionHistoryList_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTINTERCEPTIONHISTORYRESULT_H_