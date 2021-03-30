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

#ifndef ALIBABACLOUD_AIREC_MODEL_DESCRIBELATESTTASKRESULT_H_
#define ALIBABACLOUD_AIREC_MODEL_DESCRIBELATESTTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT DescribeLatestTaskResult : public ServiceResult
			{
			public:
				struct IndexVersion
				{
					std::string versionId;
					std::string status;
					int progress;
					std::string message;
					bool rollbackEnabled;
					long size;
					std::string switchedTime;
					std::string builtTime;
					std::string flowType;
					int costSeconds;
					std::string code;
				};


				DescribeLatestTaskResult();
				explicit DescribeLatestTaskResult(const std::string &payload);
				~DescribeLatestTaskResult();
				std::vector<IndexVersion> getresult()const;
				std::string getRequestId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IndexVersion> result_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_DESCRIBELATESTTASKRESULT_H_