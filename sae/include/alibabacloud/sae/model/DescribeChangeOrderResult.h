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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBECHANGEORDERRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBECHANGEORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeChangeOrderResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Pipeline
					{
						int status;
						std::string pipelineName;
						long startTime;
						long updateTime;
						int parallelCount;
						std::string pipelineId;
						int batchType;
					};
					int status;
					std::string description;
					std::vector<Pipeline> pipelines;
					bool supportAbortFreeze;
					std::vector<std::string> coTargets;
					std::string createTime;
					std::string approvalId;
					std::string changeOrderId;
					std::string batchType;
					std::string appName;
					std::string currentPipelineId;
					std::string coTypeCode;
					bool _auto;
					std::string appId;
					bool supportRollback;
					int batchWaitTime;
					int subStatus;
					std::string errorMessage;
					std::string coType;
					int batchCount;
				};


				DescribeChangeOrderResult();
				explicit DescribeChangeOrderResult(const std::string &payload);
				~DescribeChangeOrderResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBECHANGEORDERRESULT_H_