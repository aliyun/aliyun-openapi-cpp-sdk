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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELATESTSCANTASKRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELATESTSCANTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeImageLatestScanTaskResult : public ServiceResult
			{
			public:
				struct ImageScanTask
				{
					std::string status;
					std::string modified;
					std::string taskId;
					long startTime;
					std::string source;
					std::string name;
					std::string target;
					long finishTime;
					std::string create;
					std::string taskType;
					std::string targetType;
					long id;
					int finish;
					long aliUid;
				};


				DescribeImageLatestScanTaskResult();
				explicit DescribeImageLatestScanTaskResult(const std::string &payload);
				~DescribeImageLatestScanTaskResult();
				std::vector<ImageScanTask> getTask()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ImageScanTask> task_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELATESTSCANTASKRESULT_H_