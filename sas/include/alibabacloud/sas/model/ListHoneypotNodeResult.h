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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTNODERESULT_H_
#define ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTNODERESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT ListHoneypotNodeResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
					std::string lastRowKey;
				};
				struct HoneypotNode
				{
					int probeTotalCount;
					std::string nodeName;
					std::string createTime;
					bool allowHoneypotAccessInternet;
					std::string nodeIp;
					std::vector<std::string> securityGroupProbeIpList;
					std::string nodeVersion;
					int honeypotTotalCount;
					std::string ecsInstanceId;
					int probeUsedCount;
					std::string nodeId;
					bool defaultNode;
					bool upgradeAvailable;
					int honeypotUsedCount;
					int totalStatus;
				};


				ListHoneypotNodeResult();
				explicit ListHoneypotNodeResult(const std::string &payload);
				~ListHoneypotNodeResult();
				PageInfo getPageInfo()const;
				std::vector<HoneypotNode> getHoneypotNodeList()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<HoneypotNode> honeypotNodeList_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_LISTHONEYPOTNODERESULT_H_