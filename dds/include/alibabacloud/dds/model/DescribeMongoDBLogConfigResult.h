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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEMONGODBLOGCONFIGRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEMONGODBLOGCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeMongoDBLogConfigResult : public ServiceResult
			{
			public:


				DescribeMongoDBLogConfigResult();
				explicit DescribeMongoDBLogConfigResult(const std::string &payload);
				~DescribeMongoDBLogConfigResult();
				bool getEnableAudit()const;
				int getIsUserProjectLogstoreExist()const;
				long getPreserveStorageForTrail()const;
				long getUsedStorageForStandard()const;
				long getHotTtlForV2Standard()const;
				long getTtlForStandard()const;
				long getPreserveStorageForStandard()const;
				std::string getUserProjectName()const;
				std::string getServiceType()const;
				long getUsedStorageForTrail()const;
				long getTtlForV2Standard()const;
				int getIsEtlMetaExist()const;
				long getTtlForTrail()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool enableAudit_;
				int isUserProjectLogstoreExist_;
				long preserveStorageForTrail_;
				long usedStorageForStandard_;
				long hotTtlForV2Standard_;
				long ttlForStandard_;
				long preserveStorageForStandard_;
				std::string userProjectName_;
				std::string serviceType_;
				long usedStorageForTrail_;
				long ttlForV2Standard_;
				int isEtlMetaExist_;
				long ttlForTrail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEMONGODBLOGCONFIGRESULT_H_