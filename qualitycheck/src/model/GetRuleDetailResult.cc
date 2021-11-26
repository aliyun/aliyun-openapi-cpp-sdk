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

#include <alibabacloud/qualitycheck/model/GetRuleDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetRuleDetailResult::GetRuleDetailResult() :
	ServiceResult()
{}

GetRuleDetailResult::GetRuleDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRuleDetailResult::~GetRuleDetailResult()
{}

void GetRuleDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["Count"].isNull())
		data_.count = std::stoi(dataNode["Count"].asString());
	auto allConditionsNode = dataNode["Conditions"]["ConditionBasicInfo"];
	for (auto dataNodeConditionsConditionBasicInfo : allConditionsNode)
	{
		Data::ConditionBasicInfo conditionBasicInfoObject;
		if(!dataNodeConditionsConditionBasicInfo["ConditionInfoCid"].isNull())
			conditionBasicInfoObject.conditionInfoCid = dataNodeConditionsConditionBasicInfo["ConditionInfoCid"].asString();
		if(!dataNodeConditionsConditionBasicInfo["OperLambda"].isNull())
			conditionBasicInfoObject.operLambda = dataNodeConditionsConditionBasicInfo["OperLambda"].asString();
		auto allOperatorsNode = dataNodeConditionsConditionBasicInfo["Operators"]["OperatorBasicInfo"];
		for (auto dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo : allOperatorsNode)
		{
			Data::ConditionBasicInfo::OperatorBasicInfo operatorsObject;
			if(!dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Type"].isNull())
				operatorsObject.type = dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Type"].asString();
			if(!dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Oid"].isNull())
				operatorsObject.oid = dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["Oid"].asString();
			if(!dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["OperName"].isNull())
				operatorsObject.operName = dataNodeConditionsConditionBasicInfoOperatorsOperatorBasicInfo["OperName"].asString();
			auto paramNode = value["Param"];
			if(!paramNode["DifferentRole"].isNull())
				operatorsObject.param.differentRole = paramNode["DifferentRole"].asString() == "true";
			if(!paramNode["Regex"].isNull())
				operatorsObject.param.regex = paramNode["Regex"].asString();
			if(!paramNode["TargetRole"].isNull())
				operatorsObject.param.targetRole = paramNode["TargetRole"].asString();
			if(!paramNode["VelocityInMint"].isNull())
				operatorsObject.param.velocityInMint = std::stoi(paramNode["VelocityInMint"].asString());
			if(!paramNode["Average"].isNull())
				operatorsObject.param.average = paramNode["Average"].asString() == "true";
			if(!paramNode["KeywordExtension"].isNull())
				operatorsObject.param.keywordExtension = paramNode["KeywordExtension"].asString() == "true";
			if(!paramNode["Score"].isNull())
				operatorsObject.param.score = std::stoi(paramNode["Score"].asString());
			if(!paramNode["NotRegex"].isNull())
				operatorsObject.param.notRegex = paramNode["NotRegex"].asString();
			if(!paramNode["CompareOperator"].isNull())
				operatorsObject.param.compareOperator = paramNode["CompareOperator"].asString();
			if(!paramNode["DelayTime"].isNull())
				operatorsObject.param.delayTime = std::stoi(paramNode["DelayTime"].asString());
			if(!paramNode["KeywordMatchSize"].isNull())
				operatorsObject.param.keywordMatchSize = std::stoi(paramNode["KeywordMatchSize"].asString());
			if(!paramNode["HitTime"].isNull())
				operatorsObject.param.hitTime = std::stoi(paramNode["HitTime"].asString());
			if(!paramNode["BeginType"].isNull())
				operatorsObject.param.beginType = paramNode["BeginType"].asString();
			if(!paramNode["Target"].isNull())
				operatorsObject.param.target = std::stoi(paramNode["Target"].asString());
			if(!paramNode["MaxEmotionChangeValue"].isNull())
				operatorsObject.param.maxEmotionChangeValue = std::stoi(paramNode["MaxEmotionChangeValue"].asString());
			if(!paramNode["Threshold"].isNull())
				operatorsObject.param.threshold = std::stof(paramNode["Threshold"].asString());
			if(!paramNode["From"].isNull())
				operatorsObject.param.from = std::stoi(paramNode["From"].asString());
			if(!paramNode["FromEnd"].isNull())
				operatorsObject.param.fromEnd = paramNode["FromEnd"].asString() == "true";
			if(!paramNode["MinWordSize"].isNull())
				operatorsObject.param.minWordSize = std::stoi(paramNode["MinWordSize"].asString());
			if(!paramNode["InSentence"].isNull())
				operatorsObject.param.inSentence = paramNode["InSentence"].asString() == "true";
			if(!paramNode["Phrase"].isNull())
				operatorsObject.param.phrase = paramNode["Phrase"].asString();
			if(!paramNode["Similarity_threshold"].isNull())
				operatorsObject.param.similarity_threshold = std::stof(paramNode["Similarity_threshold"].asString());
			if(!paramNode["CheckType"].isNull())
				operatorsObject.param.checkType = std::stoi(paramNode["CheckType"].asString());
			if(!paramNode["Interval"].isNull())
				operatorsObject.param.interval = std::stoi(paramNode["Interval"].asString());
			if(!paramNode["ContextChatMatch"].isNull())
				operatorsObject.param.contextChatMatch = paramNode["ContextChatMatch"].asString() == "true";
				auto allExcludes = paramNode["Excludes"]["Excludes"];
				for (auto value : allExcludes)
					operatorsObject.param.excludes.push_back(value.asString());
				auto allAntModelInfo = paramNode["AntModelInfo"]["AntModelInfo"];
				for (auto value : allAntModelInfo)
					operatorsObject.param.antModelInfo.push_back(value.asString());
				auto allPvalues = paramNode["Pvalues"]["Pvalues"];
				for (auto value : allPvalues)
					operatorsObject.param.pvalues.push_back(value.asString());
				auto allReferences = paramNode["References"]["Reference"];
				for (auto value : allReferences)
					operatorsObject.param.references.push_back(value.asString());
				auto allSimilarlySentences = paramNode["SimilarlySentences"]["SimilarlySentence"];
				for (auto value : allSimilarlySentences)
					operatorsObject.param.similarlySentences.push_back(value.asString());
				auto allOperKeyWords = paramNode["OperKeyWords"]["OperKeyWord"];
				for (auto value : allOperKeyWords)
					operatorsObject.param.operKeyWords.push_back(value.asString());
			conditionBasicInfoObject.operators.push_back(operatorsObject);
		}
		auto checkRangeNode = value["CheckRange"];
		if(!checkRangeNode["Absolute"].isNull())
			conditionBasicInfoObject.checkRange.absolute = checkRangeNode["Absolute"].asString() == "true";
		if(!checkRangeNode["Role"].isNull())
			conditionBasicInfoObject.checkRange.role = checkRangeNode["Role"].asString();
		auto anchorNode = checkRangeNode["Anchor"];
		if(!anchorNode["HitTime"].isNull())
			conditionBasicInfoObject.checkRange.anchor.hitTime = std::stoi(anchorNode["HitTime"].asString());
		if(!anchorNode["Location"].isNull())
			conditionBasicInfoObject.checkRange.anchor.location = anchorNode["Location"].asString();
		if(!anchorNode["AnchorCid"].isNull())
			conditionBasicInfoObject.checkRange.anchor.anchorCid = anchorNode["AnchorCid"].asString();
		auto rangeNode = checkRangeNode["Range"];
		if(!rangeNode["To"].isNull())
			conditionBasicInfoObject.checkRange.range.to = std::stoi(rangeNode["To"].asString());
		if(!rangeNode["From"].isNull())
			conditionBasicInfoObject.checkRange.range.from = std::stoi(rangeNode["From"].asString());
		data_.conditions.push_back(conditionBasicInfoObject);
	}
	auto allRulesNode = dataNode["Rules"]["RuleBasicInfo"];
	for (auto dataNodeRulesRuleBasicInfo : allRulesNode)
	{
		Data::RuleBasicInfo ruleBasicInfoObject;
		if(!dataNodeRulesRuleBasicInfo["RuleLambda"].isNull())
			ruleBasicInfoObject.ruleLambda = dataNodeRulesRuleBasicInfo["RuleLambda"].asString();
		if(!dataNodeRulesRuleBasicInfo["Rid"].isNull())
			ruleBasicInfoObject.rid = dataNodeRulesRuleBasicInfo["Rid"].asString();
		auto allBusinessCategoriesNode = dataNodeRulesRuleBasicInfo["BusinessCategories"]["BusinessCategoryBasicInfo"];
		for (auto dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo : allBusinessCategoriesNode)
		{
			Data::RuleBasicInfo::BusinessCategoryBasicInfo businessCategoriesObject;
			if(!dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["BusinessName"].isNull())
				businessCategoriesObject.businessName = dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["BusinessName"].asString();
			if(!dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["ServiceType"].isNull())
				businessCategoriesObject.serviceType = std::stoi(dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["ServiceType"].asString());
			if(!dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["Bid"].isNull())
				businessCategoriesObject.bid = std::stoi(dataNodeRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo["Bid"].asString());
			ruleBasicInfoObject.businessCategories.push_back(businessCategoriesObject);
		}
		auto allTriggers = value["Triggers"]["Trigger"];
		for (auto value : allTriggers)
			ruleBasicInfoObject.triggers.push_back(value.asString());
		data_.rules.push_back(ruleBasicInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRuleDetailResult::getMessage()const
{
	return message_;
}

GetRuleDetailResult::Data GetRuleDetailResult::getData()const
{
	return data_;
}

std::string GetRuleDetailResult::getCode()const
{
	return code_;
}

bool GetRuleDetailResult::getSuccess()const
{
	return success_;
}

