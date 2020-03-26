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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEMETATABLEPREVIEWTASKREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEMETATABLEPREVIEWTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeMetaTablePreviewTaskRequest : public RpcServiceRequest
			{

			public:
				DescribeMetaTablePreviewTaskRequest();
				~DescribeMetaTablePreviewTaskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEMETATABLEPREVIEWTASKREQUEST_H_