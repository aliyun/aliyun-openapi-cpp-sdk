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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETCHANGEORDERINFORESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETCHANGEORDERINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetChangeOrderInfoResult : public ServiceResult
			{
			public:
				struct ChangeOrderInfo
				{
					struct TrafficControl
					{
						std::string routes;
						std::string rules;
						std::string tips;
					};
					struct PipelineInfo
					{
						struct StageInfoDTO
						{
							struct StageResultDTO
							{
								struct ServiceStage
								{
									int status;
									std::string message;
									std::string stageName;
									std::string stageId;
								};
								struct InstanceDTO
								{
									struct InstanceStageDTO
									{
										int status;
										std::string finishTime;
										std::string stageName;
										std::string stageId;
										std::string startTime;
										std::string stageMessage;
									};
									int status;
									std::string instanceName;
									std::string podStatus;
									std::string podName;
									std::string instanceIp;
									std::vector<InstanceDTO::InstanceStageDTO> instanceStageDTOList;
								};
								std::vector<InstanceDTO> instanceDTOList;
								ServiceStage serviceStage;
							};
							int status;
							std::string stageName;
							StageResultDTO stageResultDTO;
							std::string stageId;
						};
						struct StageDetailDTO
						{
							struct TaskInfoDTO
							{
								std::string taskId;
								std::string taskName;
								int taskErrorIgnorance;
								bool showManualIgnorance;
								std::string taskErrorCode;
								std::string taskStatus;
								int retryType;
								std::string taskErrorMessage;
								std::string taskMessage;
							};
							std::string stageName;
							std::vector<StageDetailDTO::TaskInfoDTO> taskList;
							std::string stageId;
							int stageStatus;
						};
						int pipelineStatus;
						std::string pipelineName;
						std::vector<PipelineInfo::StageInfoDTO> stageList;
						std::vector<PipelineInfo::StageDetailDTO> stageDetailList;
						std::string startTime;
						std::string updateTime;
						std::string pipelineId;
					};
					int status;
					std::vector<PipelineInfo> pipelineInfoList;
					TrafficControl trafficControl;
					std::string createTime;
					std::string changeOrderId;
					std::string createUserId;
					std::vector<std::string> targets;
					std::string batchType;
					std::string desc;
					std::string changeOrderDescription;
					bool supportRollback;
					std::string coType;
					int batchCount;
				};


				GetChangeOrderInfoResult();
				explicit GetChangeOrderInfoResult(const std::string &payload);
				~GetChangeOrderInfoResult();
				std::string getMessage()const;
				ChangeOrderInfo getChangeOrderInfo()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				ChangeOrderInfo changeOrderInfo_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETCHANGEORDERINFORESULT_H_