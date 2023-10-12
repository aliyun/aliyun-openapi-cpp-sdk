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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTSTEPSRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTSTEPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOmsOpenAPIProjectStepsResult : public ServiceResult
			{
			public:
				struct ErrorDetail1
				{
					std::string message;
					std::string level;
					std::string code;
					std::string proposal;
				};
				struct DataItem
				{
					struct StepInfo
					{
						struct ConnectorFullProgressOverview
						{
							int progress;
							long finishedCount;
							long estimatedRemainingTimeOfSec;
							long estimatedTotalCount;
						};
						long srcRt;
						ConnectorFullProgressOverview connectorFullProgressOverview;
						bool validated;
						long dstRps;
						long dstIops;
						long dstRtRef;
						long inconsistencies;
						bool skipped;
						long srcRps;
						std::string deployId;
						long srcIopsRef;
						long srcIops;
						long srcRpsRef;
						long gmt;
						long processedRecords;
						std::string checkpoint;
						long dstRt;
						long capacity;
						long dstRpsRef;
						long incrTimestampCheckpoint;
						long srcRtRef;
						std::string jobId;
					};
					struct ExtraInfo
					{
						struct ErrorDetail
						{
							std::string message;
							std::string level;
							std::string code;
							std::string proposal;
						};
						std::string errorMsg;
						std::string errorParam;
						std::vector<ErrorDetail> errorDetails;
						std::string errorCode;
						std::string failedTime;
					};
					StepInfo stepInfo;
					std::string finishTime;
					long estimatedRemainingSeconds;
					bool interactive;
					std::string startTime;
					int stepOrder;
					ExtraInfo extraInfo;
					std::string stepName;
					std::string stepDescription;
					std::string stepStatus;
					int stepProgress;
				};


				DescribeOmsOpenAPIProjectStepsResult();
				explicit DescribeOmsOpenAPIProjectStepsResult(const std::string &payload);
				~DescribeOmsOpenAPIProjectStepsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				ErrorDetail1 getErrorDetail1()const;
				std::vector<DataItem> getData()const;
				std::string getAdvice()const;
				std::string getCode()const;
				std::string getCost()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				ErrorDetail1 errorDetail1_;
				std::vector<DataItem> data_;
				std::string advice_;
				std::string code_;
				std::string cost_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOMSOPENAPIPROJECTSTEPSRESULT_H_