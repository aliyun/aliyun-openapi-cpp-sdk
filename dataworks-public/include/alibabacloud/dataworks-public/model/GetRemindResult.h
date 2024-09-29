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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETREMINDRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETREMINDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetRemindResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RobotsItem
					{
						bool atAll;
						std::string webUrl;
					};
					struct NodesItem
					{
						std::string owner;
						std::string nodeName;
						long nodeId;
						long projectId;
					};
					struct BaselinesItem
					{
						long baselineId;
						std::string baselineName;
					};
					struct ProjectsItem
					{
						long projectId;
					};
					struct BizProcessesItem
					{
						std::string bizProcessName;
						long bizId;
					};
					struct ReceiversItem
					{
						std::vector<std::string> alertTargets1;
						std::string alertUnit;
					};
					int alertInterval;
					std::vector<BizProcessesItem> bizProcesses;
					std::string dndStart;
					std::vector<ReceiversItem> receivers;
					std::string dndEnd;
					std::string alertUnit;
					std::vector<std::string> alertMethods;
					std::vector<ProjectsItem> projects;
					std::string founder;
					std::string remindType;
					std::vector<NodesItem> nodes;
					std::vector<BaselinesItem> baselines;
					std::vector<std::string> allowNodes;
					long remindId;
					std::vector<std::string> webhooks;
					std::string remindUnit;
					std::vector<std::string> alertTargets;
					bool useflag;
					std::vector<RobotsItem> robots;
					std::string detail;
					int maxAlertTimes;
					std::string remindName;
				};


				GetRemindResult();
				explicit GetRemindResult(const std::string &payload);
				~GetRemindResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETREMINDRESULT_H_