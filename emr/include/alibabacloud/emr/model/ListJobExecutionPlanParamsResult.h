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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANPARAMSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANPARAMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListJobExecutionPlanParamsResult : public ServiceResult
			{
			public:
				struct ParamInfo
				{
					std::string paramBizType;
					std::string paramValue;
					std::string relateId;
					std::string paramName;
					long utcCreateTimestamp;
					long utcModifiedTimestamp;
				};


				ListJobExecutionPlanParamsResult();
				explicit ListJobExecutionPlanParamsResult(const std::string &payload);
				~ListJobExecutionPlanParamsResult();
				std::string getErrMsg()const;
				std::vector<ParamInfo> getParamInfoList()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				std::vector<ParamInfo> paramInfoList_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTJOBEXECUTIONPLANPARAMSRESULT_H_