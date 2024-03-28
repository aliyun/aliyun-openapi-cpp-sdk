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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETPIPELINERESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETPIPELINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT GetPipelineResult : public ServiceResult
			{
			public:
				struct Pipeline
				{
					struct PipelineConfig
					{
						struct Source
						{
							struct Data
							{
								long serviceConnectionId;
								bool isCloneDepth;
								long credentialId;
								std::string label;
								long cloneDepth;
								std::string _namespace;
								std::string credentialLabel;
								std::string repo;
								bool isBranchMode;
								std::vector<std::string> events;
								std::string branch;
								std::string triggerFilter;
								bool isTrigger;
								std::string credentialType;
								std::string webhook;
								bool isSubmodule;
							};
							std::string type;
							Data data;
							std::string sign;
						};
						std::vector<Source> sources;
						std::string settings;
						std::string flow;
					};
					struct Tag
					{
						long id;
						std::string name;
					};
					std::vector<Tag> tagList;
					std::string modifierAccountId;
					PipelineConfig pipelineConfig;
					long createTime;
					int envId;
					long updateTime;
					std::string creatorAccountId;
					std::string envName;
					long groupId;
					std::string name;
				};


				GetPipelineResult();
				explicit GetPipelineResult(const std::string &payload);
				~GetPipelineResult();
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Pipeline getPipeline()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Pipeline pipeline_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETPIPELINERESULT_H_