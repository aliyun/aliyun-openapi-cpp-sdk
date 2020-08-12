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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTANCEGROUPSTATUSRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTANCEGROUPSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetPipelineInstanceGroupStatusResult : public ServiceResult
			{
			public:
				struct Object
				{
					struct Group
					{
						struct Stage
						{
							struct Component
							{
								std::string status;
								std::string jobId;
								std::string name;
							};
							std::vector<Stage::Component> components;
							std::string status;
							std::string sign;
						};
						std::string status;
						std::vector<Group::Stage> stages;
						std::string name;
					};
					std::string status;
					std::vector<Group> groups;
				};


				GetPipelineInstanceGroupStatusResult();
				explicit GetPipelineInstanceGroupStatusResult(const std::string &payload);
				~GetPipelineInstanceGroupStatusResult();
				Object getObject()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Object object_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTANCEGROUPSTATUSRESULT_H_