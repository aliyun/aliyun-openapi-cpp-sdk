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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSqlAuditStatResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string userName;
					long totalScanRows;
					std::string instanceId;
					double executeTime;
					std::string databaseName;
					long totalSucceed;
					double returnRows;
					std::string operatorType;
					std::string sqlId;
					long totalAffectRows;
					std::string sqlStatement;
					std::string tenantId;
					long totalFailed;
					double scanRows;
					long totalReturnRows;
					std::string userClientIp;
					double affectRows;
				};


				DescribeSqlAuditStatResult();
				explicit DescribeSqlAuditStatResult(const std::string &payload);
				~DescribeSqlAuditStatResult();
				long getTotalCount()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATRESULT_H_