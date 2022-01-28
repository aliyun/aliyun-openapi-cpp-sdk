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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEPREPAIDINSTANCESTOCKRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEPREPAIDINSTANCESTOCKRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribePrePaidInstanceStockResult : public ServiceResult
			{
			public:


				DescribePrePaidInstanceStockResult();
				explicit DescribePrePaidInstanceStockResult(const std::string &payload);
				~DescribePrePaidInstanceStockResult();
				int getCores()const;
				int getAvaliableCount()const;
				std::string getInstanceSpec()const;
				int getSystemDiskSize()const;
				int getMemory()const;
				int getDataDiskSize()const;
				std::string getEnsRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int cores_;
				int avaliableCount_;
				std::string instanceSpec_;
				int systemDiskSize_;
				int memory_;
				int dataDiskSize_;
				std::string ensRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEPREPAIDINSTANCESTOCKRESULT_H_