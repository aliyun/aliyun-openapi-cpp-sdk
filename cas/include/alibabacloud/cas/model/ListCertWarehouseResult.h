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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSERESULT_H_
#define ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT ListCertWarehouseResult : public ServiceResult
			{
			public:
				struct CertWarehouse
				{
					bool isExpired;
					std::string type;
					long endTime;
					long whId;
					std::string instanceId;
					long qps;
					std::string pcaInstanceId;
					std::string name;
				};


				ListCertWarehouseResult();
				explicit ListCertWarehouseResult(const std::string &payload);
				~ListCertWarehouseResult();
				long getTotalCount()const;
				long getCurrentPage()const;
				long getShowSize()const;
				std::vector<CertWarehouse> getCertWarehouseList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long currentPage_;
				long showSize_;
				std::vector<CertWarehouse> certWarehouseList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSERESULT_H_