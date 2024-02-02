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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATUREFGFEATURERESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATUREFGFEATURERESULT_H_

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
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetModelFeatureFGFeatureResult : public ServiceResult
			{
			public:
				struct RawFeaturesItem
				{
					std::string inputFeatureName;
					std::string featureType;
					std::string defaultValue;
					std::string valueType;
					std::string featureDomain;
					std::string featureName;
				};
				struct LookupFeaturesItem
				{
					std::string mapFeatureDomain;
					std::string defaultValue;
					std::string keyFeatureName;
					std::string valueType;
					std::string mapFeatureName;
					std::string keyFeatureDomain;
					std::string featureName;
				};
				struct SequenceFeaturesItem
				{
					struct SubFeaturesItem
					{
						std::string inputFeatureName;
						std::string featureType;
						std::string defaultValue;
						std::string valueType;
						std::string featureDomain;
						std::string featureName;
					};
					long sequenceLength;
					std::string sequenceDelim;
					std::string attributeDelim;
					std::vector<SequenceFeaturesItem::SubFeaturesItem> subFeatures;
					std::string featureName;
				};


				GetModelFeatureFGFeatureResult();
				explicit GetModelFeatureFGFeatureResult(const std::string &payload);
				~GetModelFeatureFGFeatureResult();
				std::vector<std::string> getReserves()const;
				std::vector<SequenceFeaturesItem> getSequenceFeatures()const;
				std::vector<RawFeaturesItem> getRawFeatures()const;
				std::vector<LookupFeaturesItem> getLookupFeatures()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> reserves_;
				std::vector<SequenceFeaturesItem> sequenceFeatures_;
				std::vector<RawFeaturesItem> rawFeatures_;
				std::vector<LookupFeaturesItem> lookupFeatures_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATUREFGFEATURERESULT_H_