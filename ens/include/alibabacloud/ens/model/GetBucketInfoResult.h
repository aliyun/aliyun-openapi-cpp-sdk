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

#ifndef ALIBABACLOUD_ENS_MODEL_GETBUCKETINFORESULT_H_
#define ALIBABACLOUD_ENS_MODEL_GETBUCKETINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT GetBucketInfoResult : public ServiceResult
			{
			public:
				struct BucketInfo
				{
					std::string comment;
					std::string logicalBucketType;
					std::string modifyTime;
					std::string storageClass;
					std::string createTime;
					std::string indexTableName;
					std::string cORSRule;
					std::string dataRedundancyType;
					std::string product;
					std::string resourceType;
					std::string city;
					std::string lifecycleRule;
					std::string engineInfo;
					std::string bucketAcl;
					std::string bucketName;
					std::string endpoint;
					long userId;
					std::string dispatcherType;
				};


				GetBucketInfoResult();
				explicit GetBucketInfoResult(const std::string &payload);
				~GetBucketInfoResult();
				BucketInfo getBucketInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				BucketInfo bucketInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_GETBUCKETINFORESULT_H_