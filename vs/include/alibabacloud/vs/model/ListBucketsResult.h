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

#ifndef ALIBABACLOUD_VS_MODEL_LISTBUCKETSRESULT_H_
#define ALIBABACLOUD_VS_MODEL_LISTBUCKETSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT ListBucketsResult : public ServiceResult
			{
			public:
				struct BucketInfo
				{
					std::string comment;
					std::string modifyTime;
					std::string bucketAcl;
					std::string bucketName;
					std::string endpoint;
					std::string storageClass;
					std::string createTime;
					std::string dataRedundancyType;
					std::string resourceType;
					std::string dispatcherType;
				};


				ListBucketsResult();
				explicit ListBucketsResult(const std::string &payload);
				~ListBucketsResult();
				std::vector<BucketInfo> getBucketInfos()const;
				long getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<BucketInfo> bucketInfos_;
				long totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_LISTBUCKETSRESULT_H_