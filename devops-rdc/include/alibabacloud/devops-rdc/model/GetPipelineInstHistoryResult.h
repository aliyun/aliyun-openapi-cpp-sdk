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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTHISTORYRESULT_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTHISTORYRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT GetPipelineInstHistoryResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PipelineInst
					{
						struct FlowInstance
						{
							struct Result
							{
								std::string mixFlowInstId;
								int enginePipelineId;
								std::string enginePipelineName;
								std::string triggerMode;
								std::string caches;
								std::string sources;
								std::string timeStamp;
								std::string dateTime;
								int enginePipelineNumber;
								int enginePipelineInstId;
							};
							struct Group
							{
								std::string status;
								long modifyTime;
								long endTime;
								std::string resultStatus;
								long createTime;
								long startTime;
								std::string deleteStatus;
								std::string creator;
								std::string name;
								int idExtent;
								int id;
								std::string modifier;
								int flowInstId;
							};
							std::string status;
							long modifyTime;
							std::string resultStatus;
							std::string stages;
							long createTime;
							std::string systemCode;
							std::string systemId;
							std::string statusName;
							std::string creator;
							bool autoDrivenStatus;
							Result result;
							std::string runningStatus;
							std::vector<Group> groups;
							std::string stageTopo;
							int id;
							std::string modifier;
						};
						std::string status;
						long modifyTime;
						FlowInstance flowInstance;
						long createTime;
						std::string statusName;
						int triggerMode;
						std::string creator;
						std::string packages;
						std::string deletion;
						int pipelineId;
						int id;
						std::string modifier;
						int pipelineConfigId;
						int flowInstId;
						int instNumber;
					};
					std::vector<PipelineInst> dataList;
					int total;
				};


				GetPipelineInstHistoryResult();
				explicit GetPipelineInstHistoryResult(const std::string &payload);
				~GetPipelineInstHistoryResult();
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_GETPIPELINEINSTHISTORYRESULT_H_