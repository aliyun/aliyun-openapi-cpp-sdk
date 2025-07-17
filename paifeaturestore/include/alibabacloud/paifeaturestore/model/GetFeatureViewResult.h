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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETFEATUREVIEWRESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETFEATUREVIEWRESULT_H_

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
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetFeatureViewResult : public ServiceResult
			{
			public:
				struct FieldsItem
				{
					struct TransformItem
					{
						struct InputItem
						{
							std::string type;
							std::string name;
						};
						std::vector<TransformItem::InputItem> input;
						std::string type;
						int lLMConfigId;
					};
					std::string type;
					std::vector<std::string> attributes;
					std::vector<FieldsItem::TransformItem> transform;
					std::string name;
				};


				GetFeatureViewResult();
				explicit GetFeatureViewResult(const std::string &payload);
				~GetFeatureViewResult();
				std::string getFeatureEntityName()const;
				std::string getOwner()const;
				bool getWriteToFeatureDB()const;
				std::string getProjectName()const;
				std::string getPublishTableScript()const;
				std::string getConfig()const;
				std::string getWriteMethod()const;
				bool getSyncOnlineTable()const;
				std::string getProjectId()const;
				std::string getRegisterTable()const;
				int getTTL()const;
				std::string getGmtModifiedTime()const;
				std::string getGmtSyncTime()const;
				std::string getName()const;
				std::string getJoinId()const;
				std::string getLastSyncConfig()const;
				std::string getType()const;
				std::vector<FieldsItem> getFields()const;
				std::string getMockTableName()const;
				std::string getRegisterDatasourceName()const;
				std::string getFeatureEntityId()const;
				std::vector<std::string> getTags()const;
				std::string getGmtCreateTime()const;
				std::string getRegisterDatasourceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string featureEntityName_;
				std::string owner_;
				bool writeToFeatureDB_;
				std::string projectName_;
				std::string publishTableScript_;
				std::string config_;
				std::string writeMethod_;
				bool syncOnlineTable_;
				std::string projectId_;
				std::string registerTable_;
				int tTL_;
				std::string gmtModifiedTime_;
				std::string gmtSyncTime_;
				std::string name_;
				std::string joinId_;
				std::string lastSyncConfig_;
				std::string type_;
				std::vector<FieldsItem> fields_;
				std::string mockTableName_;
				std::string registerDatasourceName_;
				std::string featureEntityId_;
				std::vector<std::string> tags_;
				std::string gmtCreateTime_;
				std::string registerDatasourceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETFEATUREVIEWRESULT_H_