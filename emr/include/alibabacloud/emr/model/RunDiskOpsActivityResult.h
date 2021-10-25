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

#ifndef ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT RunDiskOpsActivityResult : public ServiceResult
			{
			public:


				RunDiskOpsActivityResult();
				explicit RunDiskOpsActivityResult(const std::string &payload);
				~RunDiskOpsActivityResult();
				std::string getActivityState()const;
				std::string getCurrentActivity()const;
				std::string getClusterType()const;
				bool getNeedReboot()const;
				std::string getErrorMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string activityState_;
				std::string currentActivity_;
				std::string clusterType_;
				bool needReboot_;
				std::string errorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYRESULT_H_