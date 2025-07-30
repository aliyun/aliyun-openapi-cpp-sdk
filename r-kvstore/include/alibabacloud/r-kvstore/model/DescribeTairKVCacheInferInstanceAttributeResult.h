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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHEINFERINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHEINFERINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeTairKVCacheInferInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string endTime;
					std::string resourceGroupId;
					std::string zoneType;
					int computeUnitNum;
					std::string privateIp;
					std::string networkType;
					std::string instanceStatus;
					int modelServiceNum;
					std::string instanceType;
					std::vector<DBInstanceAttribute::Tag> tags;
					std::string isOrderCompleted;
					std::string architectureType;
					std::string zoneId;
					std::string instanceId;
					std::string vSwitchId;
					std::string createTime;
					std::string instanceClass;
					std::string instanceName;
					long storage;
					std::string vpcId;
					std::string chargeType;
					int isDelete;
					std::string model;
					std::string regionId;
					std::string connectionString;
				};


				DescribeTairKVCacheInferInstanceAttributeResult();
				explicit DescribeTairKVCacheInferInstanceAttributeResult(const std::string &payload);
				~DescribeTairKVCacheInferInstanceAttributeResult();
				std::vector<DBInstanceAttribute> getInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> instances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHEINFERINSTANCEATTRIBUTERESULT_H_