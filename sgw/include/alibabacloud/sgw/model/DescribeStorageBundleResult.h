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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBESTORAGEBUNDLERESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBESTORAGEBUNDLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeStorageBundleResult : public ServiceResult
			{
			public:


				DescribeStorageBundleResult();
				explicit DescribeStorageBundleResult(const std::string &payload);
				~DescribeStorageBundleResult();
				std::string getDescription()const;
				long getCreatedTime()const;
				std::string getMessage()const;
				std::string getResourceGroupId()const;
				std::string getStorageBundleId()const;
				std::string getCode()const;
				std::string getBackendBucketRegionId()const;
				bool getSuccess()const;
				std::string getName()const;
				std::string getLocation()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				long createdTime_;
				std::string message_;
				std::string resourceGroupId_;
				std::string storageBundleId_;
				std::string code_;
				std::string backendBucketRegionId_;
				bool success_;
				std::string name_;
				std::string location_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBESTORAGEBUNDLERESULT_H_