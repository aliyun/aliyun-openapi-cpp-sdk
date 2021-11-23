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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBECOLDSTORAGERESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBECOLDSTORAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeColdStorageResult : public ServiceResult
			{
			public:


				DescribeColdStorageResult();
				explicit DescribeColdStorageResult(const std::string &payload);
				~DescribeColdStorageResult();
				std::string getColdStorageUsePercent()const;
				std::string getColdStorageSize()const;
				std::string getColdStorageUseAmount()const;
				std::string getClusterId()const;
				std::string getColdStorageType()const;
				std::string getPayType()const;
				std::string getOpenStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string coldStorageUsePercent_;
				std::string coldStorageSize_;
				std::string coldStorageUseAmount_;
				std::string clusterId_;
				std::string coldStorageType_;
				std::string payType_;
				std::string openStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBECOLDSTORAGERESULT_H_