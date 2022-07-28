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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCERESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeResourceResult : public ServiceResult
			{
			public:


				DescribeResourceResult();
				explicit DescribeResourceResult(const std::string &payload);
				~DescribeResourceResult();
				std::string getStatus()const;
				int getPrePaidInstanceCount()const;
				std::string getMessage()const;
				std::string getClusterId()const;
				std::string getResourceName()const;
				std::string getOwnerUid()const;
				std::string getCreateTime()const;
				int getPostPaidInstanceCount()const;
				std::string getExtraData()const;
				int getInstanceCount()const;
				int getCpuCount()const;
				std::string getResourceId()const;
				std::string getUpdateTime()const;
				int getGpuCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int prePaidInstanceCount_;
				std::string message_;
				std::string clusterId_;
				std::string resourceName_;
				std::string ownerUid_;
				std::string createTime_;
				int postPaidInstanceCount_;
				std::string extraData_;
				int instanceCount_;
				int cpuCount_;
				std::string resourceId_;
				std::string updateTime_;
				int gpuCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBERESOURCERESULT_H_