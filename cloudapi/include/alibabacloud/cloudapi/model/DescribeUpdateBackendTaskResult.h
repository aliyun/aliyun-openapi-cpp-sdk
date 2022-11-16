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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEUPDATEBACKENDTASKRESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEUPDATEBACKENDTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeUpdateBackendTaskResult : public ServiceResult
			{
			public:
				struct ApiUpdateBackendResult
				{
					std::string groupName;
					std::string apiUid;
					std::string updateStatus;
					std::string stageName;
					std::string apiName;
					std::string stageId;
					std::string backendId;
					std::string errorMsg;
					std::string groupId;
				};


				DescribeUpdateBackendTaskResult();
				explicit DescribeUpdateBackendTaskResult(const std::string &payload);
				~DescribeUpdateBackendTaskResult();
				std::vector<ApiUpdateBackendResult> getApiUpdateBackendResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ApiUpdateBackendResult> apiUpdateBackendResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEUPDATEBACKENDTASKRESULT_H_