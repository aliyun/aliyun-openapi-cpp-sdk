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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKRESULT_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sophonsoar/SophonsoarExport.h>

namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		namespace Model
		{
			class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribePlaybookResult : public ServiceResult
			{
			public:
				struct Playbook
				{
					std::string onlineCron;
					std::string description;
					std::string gmtModified;
					int successExeNum;
					std::string onlineReleaseUuid;
					std::string onlineReleaseTaskflowMd5;
					std::string onlineExecuteMode;
					std::string releaseTaskflowMd5;
					std::string cron;
					std::string taskconfig;
					std::string compiledresult;
					std::string inputParams;
					std::string ownType;
					bool onlineActive;
					std::string displayName;
					int playbookStatus;
					std::string inputtype;
					std::string executeMode;
					std::string outputParams;
					std::string operateType;
					long lastExeTime;
					int parentId;
					std::string rightLevel;
					std::string taskflow;
					std::string releaseUuid;
					std::string onlineReleaseTime;
					std::string debugFlag;
					std::string triggerInfo;
					std::string taskflowType;
					int flag;
					std::string oss;
					long onlineSchedulerId;
					std::string playbookUuid;
					std::string taskFlowDesc;
					std::string gmtCreate;
					std::string tenantId;
					std::string type;
					bool active;
					int failExeNum;
					std::string releaseTime;
					std::string onlineOss;
					std::string onlineCompiledresult;
					int riskLevel;
					long schedulerId;
					std::string taskflowMd5;
				};


				DescribePlaybookResult();
				explicit DescribePlaybookResult(const std::string &payload);
				~DescribePlaybookResult();
				Playbook getPlaybook()const;

			protected:
				void parse(const std::string &payload);
			private:
				Playbook playbook_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKRESULT_H_