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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeFotaTasksResult : public ServiceResult
			{
			public:
				struct FotaTask
				{
					std::string appVersion;
					std::string status;
					std::string taskUid;
					int pendingDesktopCount;
					int pendingCustomImageCount;
					int size;
					std::string releaseNote;
					std::string publishTime;
					std::string fotaProject;
				};


				DescribeFotaTasksResult();
				explicit DescribeFotaTasksResult(const std::string &payload);
				~DescribeFotaTasksResult();
				std::vector<FotaTask> getFotaTasks()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FotaTask> fotaTasks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSRESULT_H_