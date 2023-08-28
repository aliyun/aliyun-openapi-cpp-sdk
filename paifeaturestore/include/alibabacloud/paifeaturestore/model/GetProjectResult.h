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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetProjectResult : public ServiceResult
			{
			public:


				GetProjectResult();
				explicit GetProjectResult(const std::string &payload);
				~GetProjectResult();
				std::string getOnlineDatasourceType()const;
				std::string getOwner()const;
				std::string getDescription()const;
				std::string getOfflineDatasourceName()const;
				std::string getGmtModifiedTime()const;
				std::string getName()const;
				std::string getOfflineDatasourceId()const;
				std::string getOnlineDatasourceName()const;
				int getFeatureViewCount()const;
				int getOfflineLifecycle()const;
				int getModelCount()const;
				std::string getOfflineDatasourceType()const;
				int getFeatureEntityCount()const;
				std::string getGmtCreateTime()const;
				std::string getOnlineDatasourceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string onlineDatasourceType_;
				std::string owner_;
				std::string description_;
				std::string offlineDatasourceName_;
				std::string gmtModifiedTime_;
				std::string name_;
				std::string offlineDatasourceId_;
				std::string onlineDatasourceName_;
				int featureViewCount_;
				int offlineLifecycle_;
				int modelCount_;
				std::string offlineDatasourceType_;
				int featureEntityCount_;
				std::string gmtCreateTime_;
				std::string onlineDatasourceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTRESULT_H_