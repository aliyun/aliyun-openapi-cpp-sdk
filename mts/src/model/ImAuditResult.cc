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

#include <alibabacloud/mts/model/ImAuditResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ImAuditResult::ImAuditResult() :
	ServiceResult()
{}

ImAuditResult::ImAuditResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImAuditResult::~ImAuditResult()
{}

void ImAuditResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageResultsNode = value["ImageResults"];
	auto allresultNode = imageResultsNode["result"]["resultItem"];
	for (auto imageResultsNoderesultresultItem : allresultNode)
	{
		ImageResults::ResultItem resultItemObject;
		if(!imageResultsNoderesultresultItem["code"].isNull())
			resultItemObject.code = std::stol(imageResultsNoderesultresultItem["code"].asString());
		if(!imageResultsNoderesultresultItem["dataId"].isNull())
			resultItemObject.dataId = imageResultsNoderesultresultItem["dataId"].asString();
		if(!imageResultsNoderesultresultItem["extras"].isNull())
			resultItemObject.extras = imageResultsNoderesultresultItem["extras"].asString();
		if(!imageResultsNoderesultresultItem["msg"].isNull())
			resultItemObject.msg = imageResultsNoderesultresultItem["msg"].asString();
		if(!imageResultsNoderesultresultItem["taskId"].isNull())
			resultItemObject.taskId = imageResultsNoderesultresultItem["taskId"].asString();
		if(!imageResultsNoderesultresultItem["url"].isNull())
			resultItemObject.url = imageResultsNoderesultresultItem["url"].asString();
		auto allresultsNode = imageResultsNoderesultresultItem["results"]["result"];
		for (auto imageResultsNoderesultresultItemresultsresult : allresultsNode)
		{
			ImageResults::ResultItem::Result resultsObject;
			if(!imageResultsNoderesultresultItemresultsresult["Label"].isNull())
				resultsObject.label = imageResultsNoderesultresultItemresultsresult["Label"].asString();
			if(!imageResultsNoderesultresultItemresultsresult["Rate"].isNull())
				resultsObject.rate = imageResultsNoderesultresultItemresultsresult["Rate"].asString();
			if(!imageResultsNoderesultresultItemresultsresult["Scene"].isNull())
				resultsObject.scene = imageResultsNoderesultresultItemresultsresult["Scene"].asString();
			if(!imageResultsNoderesultresultItemresultsresult["Suggestion"].isNull())
				resultsObject.suggestion = imageResultsNoderesultresultItemresultsresult["Suggestion"].asString();
			auto allhintWordsInfoNode = imageResultsNoderesultresultItemresultsresult["hintWordsInfo"]["hintWordsInfoItem"];
			for (auto imageResultsNoderesultresultItemresultsresulthintWordsInfohintWordsInfoItem : allhintWordsInfoNode)
			{
				ImageResults::ResultItem::Result::HintWordsInfoItem hintWordsInfoObject;
				if(!imageResultsNoderesultresultItemresultsresulthintWordsInfohintWordsInfoItem["context"].isNull())
					hintWordsInfoObject.context = imageResultsNoderesultresultItemresultsresulthintWordsInfohintWordsInfoItem["context"].asString();
				resultsObject.hintWordsInfo.push_back(hintWordsInfoObject);
			}
			auto allqrcodeLocationsNode = imageResultsNoderesultresultItemresultsresult["qrcodeLocations"]["qrcodeLocationsItem"];
			for (auto imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem : allqrcodeLocationsNode)
			{
				ImageResults::ResultItem::Result::QrcodeLocationsItem qrcodeLocationsObject;
				if(!imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["x"].isNull())
					qrcodeLocationsObject.x = std::stof(imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["x"].asString());
				if(!imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["y"].isNull())
					qrcodeLocationsObject.y = std::stof(imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["y"].asString());
				if(!imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["w"].isNull())
					qrcodeLocationsObject.w = std::stof(imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["w"].asString());
				if(!imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["h"].isNull())
					qrcodeLocationsObject.h = std::stof(imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["h"].asString());
				if(!imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["qrcode"].isNull())
					qrcodeLocationsObject.qrcode = imageResultsNoderesultresultItemresultsresultqrcodeLocationsqrcodeLocationsItem["qrcode"].asString();
				resultsObject.qrcodeLocations.push_back(qrcodeLocationsObject);
			}
			auto allprogramCodeDataNode = imageResultsNoderesultresultItemresultsresult["programCodeData"]["programCodeDataItem"];
			for (auto imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem : allprogramCodeDataNode)
			{
				ImageResults::ResultItem::Result::ProgramCodeDataItem programCodeDataObject;
				if(!imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["x"].isNull())
					programCodeDataObject.x = std::stof(imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["x"].asString());
				if(!imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["y"].isNull())
					programCodeDataObject.y = std::stof(imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["y"].asString());
				if(!imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["w"].isNull())
					programCodeDataObject.w = std::stof(imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["w"].asString());
				if(!imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["h"].isNull())
					programCodeDataObject.h = std::stof(imageResultsNoderesultresultItemresultsresultprogramCodeDataprogramCodeDataItem["h"].asString());
				resultsObject.programCodeData.push_back(programCodeDataObject);
			}
			auto alllogoDataNode = imageResultsNoderesultresultItemresultsresult["logoData"]["logoDataItem"];
			for (auto imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem : alllogoDataNode)
			{
				ImageResults::ResultItem::Result::LogoDataItem logoDataObject;
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["type"].isNull())
					logoDataObject.type = imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["type"].asString();
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["name"].isNull())
					logoDataObject.name = imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["name"].asString();
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["x"].isNull())
					logoDataObject.x = std::stof(imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["x"].asString());
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["y"].isNull())
					logoDataObject.y = std::stof(imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["y"].asString());
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["w"].isNull())
					logoDataObject.w = std::stof(imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["w"].asString());
				if(!imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["h"].isNull())
					logoDataObject.h = std::stof(imageResultsNoderesultresultItemresultsresultlogoDatalogoDataItem["h"].asString());
				resultsObject.logoData.push_back(logoDataObject);
			}
			auto allsfaceDataNode = imageResultsNoderesultresultItemresultsresult["sfaceData"]["sfaceDataItem"];
			for (auto imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem : allsfaceDataNode)
			{
				ImageResults::ResultItem::Result::SfaceDataItem sfaceDataObject;
				if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["x"].isNull())
					sfaceDataObject.x = std::stof(imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["x"].asString());
				if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["y"].isNull())
					sfaceDataObject.y = std::stof(imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["y"].asString());
				if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["w"].isNull())
					sfaceDataObject.w = std::stof(imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["w"].asString());
				if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["h"].isNull())
					sfaceDataObject.h = std::stof(imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["h"].asString());
				auto allfacesNode = imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItem["faces"]["facesItem"];
				for (auto imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem : allfacesNode)
				{
					ImageResults::ResultItem::Result::SfaceDataItem::FacesItem facesObject;
					if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["name"].isNull())
						facesObject.name = imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["name"].asString();
					if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["re"].isNull())
						facesObject.re = std::stof(imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["re"].asString());
					if(!imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["idid"].isNull())
						facesObject.idid = imageResultsNoderesultresultItemresultsresultsfaceDatasfaceDataItemfacesfacesItem["idid"].asString();
					sfaceDataObject.faces.push_back(facesObject);
				}
				resultsObject.sfaceData.push_back(sfaceDataObject);
			}
			auto allframesNode = imageResultsNoderesultresultItemresultsresult["frames"]["framesItem"];
			for (auto imageResultsNoderesultresultItemresultsresultframesframesItem : allframesNode)
			{
				ImageResults::ResultItem::Result::FramesItem framesObject;
				if(!imageResultsNoderesultresultItemresultsresultframesframesItem["rate"].isNull())
					framesObject.rate = std::stof(imageResultsNoderesultresultItemresultsresultframesframesItem["rate"].asString());
				if(!imageResultsNoderesultresultItemresultsresultframesframesItem["url"].isNull())
					framesObject.url = imageResultsNoderesultresultItemresultsresultframesframesItem["url"].asString();
				resultsObject.frames.push_back(framesObject);
			}
			auto allQrcodeData = value["qrcodeData"]["qrcodeData"];
			for (auto value : allQrcodeData)
				resultsObject.qrcodeData.push_back(value.asString());
			auto allOcrData = value["ocrData"]["ocrData"];
			for (auto value : allOcrData)
				resultsObject.ocrData.push_back(value.asString());
			resultItemObject.results.push_back(resultsObject);
		}
		imageResults_.result.push_back(resultItemObject);
	}
	auto textResultsNode = value["TextResults"];
	auto allresult1Node = textResultsNode["result"]["resultItem"];
	for (auto textResultsNoderesultresultItem : allresult1Node)
	{
		TextResults::ResultItem2 resultItem2Object;
		if(!textResultsNoderesultresultItem["code"].isNull())
			resultItem2Object.code = std::stol(textResultsNoderesultresultItem["code"].asString());
		if(!textResultsNoderesultresultItem["content"].isNull())
			resultItem2Object.content = textResultsNoderesultresultItem["content"].asString();
		if(!textResultsNoderesultresultItem["dataId"].isNull())
			resultItem2Object.dataId = textResultsNoderesultresultItem["dataId"].asString();
		if(!textResultsNoderesultresultItem["msg"].isNull())
			resultItem2Object.msg = textResultsNoderesultresultItem["msg"].asString();
		if(!textResultsNoderesultresultItem["taskId"].isNull())
			resultItem2Object.taskId = textResultsNoderesultresultItem["taskId"].asString();
		auto allresults3Node = textResultsNoderesultresultItem["results"]["result"];
		for (auto textResultsNoderesultresultItemresultsresult : allresults3Node)
		{
			TextResults::ResultItem2::Result4 results3Object;
			if(!textResultsNoderesultresultItemresultsresult["label"].isNull())
				results3Object.label = textResultsNoderesultresultItemresultsresult["label"].asString();
			if(!textResultsNoderesultresultItemresultsresult["rate"].isNull())
				results3Object.rate = textResultsNoderesultresultItemresultsresult["rate"].asString();
			if(!textResultsNoderesultresultItemresultsresult["scene"].isNull())
				results3Object.scene = textResultsNoderesultresultItemresultsresult["scene"].asString();
			if(!textResultsNoderesultresultItemresultsresult["suggestion"].isNull())
				results3Object.suggestion = textResultsNoderesultresultItemresultsresult["suggestion"].asString();
			auto alldetailsNode = textResultsNoderesultresultItemresultsresult["details"]["detailsItem"];
			for (auto textResultsNoderesultresultItemresultsresultdetailsdetailsItem : alldetailsNode)
			{
				TextResults::ResultItem2::Result4::DetailsItem detailsObject;
				if(!textResultsNoderesultresultItemresultsresultdetailsdetailsItem["Label"].isNull())
					detailsObject.label = textResultsNoderesultresultItemresultsresultdetailsdetailsItem["Label"].asString();
				auto allcontextsNode = textResultsNoderesultresultItemresultsresultdetailsdetailsItem["contexts"]["contextsItem"];
				for (auto textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem : allcontextsNode)
				{
					TextResults::ResultItem2::Result4::DetailsItem::ContextsItem contextsObject;
					if(!textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["context"].isNull())
						contextsObject.context = textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["context"].asString();
					if(!textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["libName"].isNull())
						contextsObject.libName = textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["libName"].asString();
					if(!textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["libCode"].isNull())
						contextsObject.libCode = textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["libCode"].asString();
					if(!textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["ruleType"].isNull())
						contextsObject.ruleType = textResultsNoderesultresultItemresultsresultdetailsdetailsItemcontextscontextsItem["ruleType"].asString();
					auto allPositions = value["positions"]["positions"];
					for (auto value : allPositions)
						contextsObject.positions.push_back(value.asString());
					detailsObject.contexts.push_back(contextsObject);
				}
				results3Object.details.push_back(detailsObject);
			}
			resultItem2Object.results3.push_back(results3Object);
		}
		textResults_.result1.push_back(resultItem2Object);
	}
	if(!value["TextQuotaExceed"].isNull())
		textQuotaExceed_ = value["TextQuotaExceed"].asString() == "true";
	if(!value["ImageQuotaExceed"].isNull())
		imageQuotaExceed_ = value["ImageQuotaExceed"].asString() == "true";

}

bool ImAuditResult::getTextQuotaExceed()const
{
	return textQuotaExceed_;
}

bool ImAuditResult::getImageQuotaExceed()const
{
	return imageQuotaExceed_;
}

ImAuditResult::ImageResults ImAuditResult::getImageResults()const
{
	return imageResults_;
}

ImAuditResult::TextResults ImAuditResult::getTextResults()const
{
	return textResults_;
}

