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

#include <alibabacloud/paifeaturestore/model/GetModelFeatureFGFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetModelFeatureFGFeatureResult::GetModelFeatureFGFeatureResult() :
	ServiceResult()
{}

GetModelFeatureFGFeatureResult::GetModelFeatureFGFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetModelFeatureFGFeatureResult::~GetModelFeatureFGFeatureResult()
{}

void GetModelFeatureFGFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRawFeaturesNode = value["RawFeatures"]["RawFeaturesItem"];
	for (auto valueRawFeaturesRawFeaturesItem : allRawFeaturesNode)
	{
		RawFeaturesItem rawFeaturesObject;
		if(!valueRawFeaturesRawFeaturesItem["InputFeatureName"].isNull())
			rawFeaturesObject.inputFeatureName = valueRawFeaturesRawFeaturesItem["InputFeatureName"].asString();
		if(!valueRawFeaturesRawFeaturesItem["FeatureDomain"].isNull())
			rawFeaturesObject.featureDomain = valueRawFeaturesRawFeaturesItem["FeatureDomain"].asString();
		if(!valueRawFeaturesRawFeaturesItem["FeatureName"].isNull())
			rawFeaturesObject.featureName = valueRawFeaturesRawFeaturesItem["FeatureName"].asString();
		if(!valueRawFeaturesRawFeaturesItem["FeatureType"].isNull())
			rawFeaturesObject.featureType = valueRawFeaturesRawFeaturesItem["FeatureType"].asString();
		if(!valueRawFeaturesRawFeaturesItem["ValueType"].isNull())
			rawFeaturesObject.valueType = valueRawFeaturesRawFeaturesItem["ValueType"].asString();
		if(!valueRawFeaturesRawFeaturesItem["DefaultValue"].isNull())
			rawFeaturesObject.defaultValue = valueRawFeaturesRawFeaturesItem["DefaultValue"].asString();
		rawFeatures_.push_back(rawFeaturesObject);
	}
	auto allLookupFeaturesNode = value["LookupFeatures"]["LookupFeaturesItem"];
	for (auto valueLookupFeaturesLookupFeaturesItem : allLookupFeaturesNode)
	{
		LookupFeaturesItem lookupFeaturesObject;
		if(!valueLookupFeaturesLookupFeaturesItem["MapFeatureName"].isNull())
			lookupFeaturesObject.mapFeatureName = valueLookupFeaturesLookupFeaturesItem["MapFeatureName"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["MapFeatureDomain"].isNull())
			lookupFeaturesObject.mapFeatureDomain = valueLookupFeaturesLookupFeaturesItem["MapFeatureDomain"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["FeatureName"].isNull())
			lookupFeaturesObject.featureName = valueLookupFeaturesLookupFeaturesItem["FeatureName"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["ValueType"].isNull())
			lookupFeaturesObject.valueType = valueLookupFeaturesLookupFeaturesItem["ValueType"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["DefaultValue"].isNull())
			lookupFeaturesObject.defaultValue = valueLookupFeaturesLookupFeaturesItem["DefaultValue"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["KeyFeatureName"].isNull())
			lookupFeaturesObject.keyFeatureName = valueLookupFeaturesLookupFeaturesItem["KeyFeatureName"].asString();
		if(!valueLookupFeaturesLookupFeaturesItem["KeyFeatureDomain"].isNull())
			lookupFeaturesObject.keyFeatureDomain = valueLookupFeaturesLookupFeaturesItem["KeyFeatureDomain"].asString();
		lookupFeatures_.push_back(lookupFeaturesObject);
	}
	auto allSequenceFeaturesNode = value["SequenceFeatures"]["SequenceFeaturesItem"];
	for (auto valueSequenceFeaturesSequenceFeaturesItem : allSequenceFeaturesNode)
	{
		SequenceFeaturesItem sequenceFeaturesObject;
		if(!valueSequenceFeaturesSequenceFeaturesItem["FeatureName"].isNull())
			sequenceFeaturesObject.featureName = valueSequenceFeaturesSequenceFeaturesItem["FeatureName"].asString();
		if(!valueSequenceFeaturesSequenceFeaturesItem["SequenceLength"].isNull())
			sequenceFeaturesObject.sequenceLength = std::stol(valueSequenceFeaturesSequenceFeaturesItem["SequenceLength"].asString());
		if(!valueSequenceFeaturesSequenceFeaturesItem["SequenceDelim"].isNull())
			sequenceFeaturesObject.sequenceDelim = valueSequenceFeaturesSequenceFeaturesItem["SequenceDelim"].asString();
		if(!valueSequenceFeaturesSequenceFeaturesItem["AttributeDelim"].isNull())
			sequenceFeaturesObject.attributeDelim = valueSequenceFeaturesSequenceFeaturesItem["AttributeDelim"].asString();
		auto allSubFeaturesNode = valueSequenceFeaturesSequenceFeaturesItem["SubFeatures"]["SubFeaturesItem"];
		for (auto valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem : allSubFeaturesNode)
		{
			SequenceFeaturesItem::SubFeaturesItem subFeaturesObject;
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["InputFeatureName"].isNull())
				subFeaturesObject.inputFeatureName = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["InputFeatureName"].asString();
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureDomain"].isNull())
				subFeaturesObject.featureDomain = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureDomain"].asString();
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureName"].isNull())
				subFeaturesObject.featureName = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureName"].asString();
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureType"].isNull())
				subFeaturesObject.featureType = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["FeatureType"].asString();
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["ValueType"].isNull())
				subFeaturesObject.valueType = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["ValueType"].asString();
			if(!valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["DefaultValue"].isNull())
				subFeaturesObject.defaultValue = valueSequenceFeaturesSequenceFeaturesItemSubFeaturesSubFeaturesItem["DefaultValue"].asString();
			sequenceFeaturesObject.subFeatures.push_back(subFeaturesObject);
		}
		sequenceFeatures_.push_back(sequenceFeaturesObject);
	}
	auto allReserves = value["Reserves"]["Reserves"];
	for (const auto &item : allReserves)
		reserves_.push_back(item.asString());

}

std::vector<std::string> GetModelFeatureFGFeatureResult::getReserves()const
{
	return reserves_;
}

std::vector<GetModelFeatureFGFeatureResult::SequenceFeaturesItem> GetModelFeatureFGFeatureResult::getSequenceFeatures()const
{
	return sequenceFeatures_;
}

std::vector<GetModelFeatureFGFeatureResult::RawFeaturesItem> GetModelFeatureFGFeatureResult::getRawFeatures()const
{
	return rawFeatures_;
}

std::vector<GetModelFeatureFGFeatureResult::LookupFeaturesItem> GetModelFeatureFGFeatureResult::getLookupFeatures()const
{
	return lookupFeatures_;
}

