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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATALIMITSETRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATALIMITSETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeDataLimitSetResult : public ServiceResult
			{
			public:
				struct DataLimitSet
				{
					struct DataLimit
					{
						std::string parentId;
						std::string connector;
						long gmtCreate;
						std::string userName;
						int checkStatus;
						std::string regionId;
						long id;
						std::string checkStatusName;
						std::string localName;
					};
					struct OssBucket
					{
						std::string bucketName;
						std::string regionId;
					};
					struct Region
					{
						std::string regionId;
						std::string localName;
					};
					std::vector<DataLimit> dataLimitList;
					std::vector<OssBucket> ossBucketList;
					int resourceType;
					std::vector<Region> regionList;
				};


				DescribeDataLimitSetResult();
				explicit DescribeDataLimitSetResult(const std::string &payload);
				~DescribeDataLimitSetResult();
				DataLimitSet getDataLimitSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataLimitSet dataLimitSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATALIMITSETRESULT_H_