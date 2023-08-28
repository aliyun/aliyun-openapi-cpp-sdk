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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTMODELFEATURERESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTMODELFEATURERESULT_H_

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
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetProjectModelFeatureResult : public ServiceResult
			{
			public:
				struct FeaturesItem
				{
					std::string type;
					std::string featureViewId;
					std::string aliasName;
					std::string featureViewName;
					std::string name;
				};


				GetProjectModelFeatureResult();
				explicit GetProjectModelFeatureResult(const std::string &payload);
				~GetProjectModelFeatureResult();
				std::string getOwner()const;
				std::string getProjectName()const;
				std::string getLabelDatasourceTable()const;
				std::string getProjectId()const;
				std::string getLabelDatasourceId()const;
				std::string getModelFeatureId()const;
				std::string getTrainingSetFGTable()const;
				std::string getGmtModifiedTime()const;
				std::string getName()const;
				std::string getTrainingSetTable()const;
				std::string getLabelEventTime()const;
				std::vector<FeaturesItem> getFeatures()const;
				std::string getLabelTableId()const;
				std::string getGmtCreateTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string owner_;
				std::string projectName_;
				std::string labelDatasourceTable_;
				std::string projectId_;
				std::string labelDatasourceId_;
				std::string modelFeatureId_;
				std::string trainingSetFGTable_;
				std::string gmtModifiedTime_;
				std::string name_;
				std::string trainingSetTable_;
				std::string labelEventTime_;
				std::vector<FeaturesItem> features_;
				std::string labelTableId_;
				std::string gmtCreateTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETPROJECTMODELFEATURERESULT_H_