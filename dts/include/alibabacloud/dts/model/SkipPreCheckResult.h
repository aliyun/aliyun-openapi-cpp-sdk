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

#ifndef ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT SkipPreCheckResult : public ServiceResult
			{
			public:


				SkipPreCheckResult();
				explicit SkipPreCheckResult(const std::string &payload);
				~SkipPreCheckResult();
				std::string getSkipItems()const;
				std::string getScheduleJobId()const;
				int getHttpStatusCode()const;
				std::string getSkipNames()const;
				std::string getDynamicMessage()const;
				std::string getErrMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getErrCode()const;
				std::string getMigrationJobId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string skipItems_;
				std::string scheduleJobId_;
				int httpStatusCode_;
				std::string skipNames_;
				std::string dynamicMessage_;
				std::string errMessage_;
				std::string code_;
				bool success_;
				std::string errCode_;
				std::string migrationJobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKRESULT_H_