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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETOTALCOUNTRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETOTALCOUNTRESULT_H_

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
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeTotalCountResult : public ServiceResult
			{
			public:
				struct DataCount
				{
					struct Instance
					{
						long totalCount;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						long lastCount;
					};
					struct Table
					{
						long totalCount;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						long lastCount;
					};
					struct Oss
					{
						long totalCount;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						long lastCount;
					};
					Table table;
					Instance instance;
					Oss oss;
				};
				struct EventCount
				{
					struct Total
					{
						long totalCount;
						long excludeCount;
						long undealCount;
						long confirmCount;
					};
					Total total;
				};
				struct DepartCount
				{
					long dtCount;
					long departCount;
					long userCount;
					long subCount;
					long count;
					long sensitiveCount;
				};


				DescribeTotalCountResult();
				explicit DescribeTotalCountResult(const std::string &payload);
				~DescribeTotalCountResult();
				DepartCount getDepartCount()const;
				EventCount getEventCount()const;
				DataCount getDataCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				DepartCount departCount_;
				EventCount eventCount_;
				DataCount dataCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBETOTALCOUNTRESULT_H_