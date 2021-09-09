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

#include <alibabacloud/companyreg/model/GetTypeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetTypeListResult::GetTypeListResult() :
	ServiceResult()
{}

GetTypeListResult::GetTypeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTypeListResult::~GetTypeListResult()
{}

void GetTypeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto feeNode = value["Fee"];
	auto allKindNode = feeNode["Kind"]["KindEnum"];
	for (auto feeNodeKindKindEnum : allKindNode)
	{
		Fee::KindEnum kindEnumObject;
		if(!feeNodeKindKindEnum["Key"].isNull())
			kindEnumObject.key = feeNodeKindKindEnum["Key"].asString();
		if(!feeNodeKindKindEnum["Value"].isNull())
			kindEnumObject.value = feeNodeKindKindEnum["Value"].asString();
		fee_.kind.push_back(kindEnumObject);
	}
	auto allPayMethodNode = feeNode["PayMethod"]["PayMethodEnum"];
	for (auto feeNodePayMethodPayMethodEnum : allPayMethodNode)
	{
		Fee::PayMethodEnum payMethodEnumObject;
		if(!feeNodePayMethodPayMethodEnum["Key"].isNull())
			payMethodEnumObject.key = feeNodePayMethodPayMethodEnum["Key"].asString();
		if(!feeNodePayMethodPayMethodEnum["Value"].isNull())
			payMethodEnumObject.value = feeNodePayMethodPayMethodEnum["Value"].asString();
		fee_.payMethod.push_back(payMethodEnumObject);
	}
	auto allUseNode = feeNode["Use"]["UseEnum"];
	for (auto feeNodeUseUseEnum : allUseNode)
	{
		Fee::UseEnum useEnumObject;
		if(!feeNodeUseUseEnum["Key"].isNull())
			useEnumObject.key = feeNodeUseUseEnum["Key"].asString();
		if(!feeNodeUseUseEnum["Value"].isNull())
			useEnumObject.value = feeNodeUseUseEnum["Value"].asString();
		fee_.use.push_back(useEnumObject);
	}
	auto inInvoiceNode = value["InInvoice"];
	auto allBuyMethodNode = inInvoiceNode["BuyMethod"]["BuyMethodEnum"];
	for (auto inInvoiceNodeBuyMethodBuyMethodEnum : allBuyMethodNode)
	{
		InInvoice::BuyMethodEnum buyMethodEnumObject;
		if(!inInvoiceNodeBuyMethodBuyMethodEnum["Key"].isNull())
			buyMethodEnumObject.key = inInvoiceNodeBuyMethodBuyMethodEnum["Key"].asString();
		if(!inInvoiceNodeBuyMethodBuyMethodEnum["Value"].isNull())
			buyMethodEnumObject.value = inInvoiceNodeBuyMethodBuyMethodEnum["Value"].asString();
		inInvoice_.buyMethod.push_back(buyMethodEnumObject);
	}
	auto allFixedAssetTypeNode = inInvoiceNode["FixedAssetType"]["FixedAssetTypeEnum"];
	for (auto inInvoiceNodeFixedAssetTypeFixedAssetTypeEnum : allFixedAssetTypeNode)
	{
		InInvoice::FixedAssetTypeEnum fixedAssetTypeEnumObject;
		if(!inInvoiceNodeFixedAssetTypeFixedAssetTypeEnum["Key"].isNull())
			fixedAssetTypeEnumObject.key = inInvoiceNodeFixedAssetTypeFixedAssetTypeEnum["Key"].asString();
		if(!inInvoiceNodeFixedAssetTypeFixedAssetTypeEnum["Value"].isNull())
			fixedAssetTypeEnumObject.value = inInvoiceNodeFixedAssetTypeFixedAssetTypeEnum["Value"].asString();
		inInvoice_.fixedAssetType.push_back(fixedAssetTypeEnumObject);
	}
	auto allBuyTargetNode = inInvoiceNode["BuyTarget"]["BuyTargetEnum"];
	for (auto inInvoiceNodeBuyTargetBuyTargetEnum : allBuyTargetNode)
	{
		InInvoice::BuyTargetEnum buyTargetEnumObject;
		if(!inInvoiceNodeBuyTargetBuyTargetEnum["Key"].isNull())
			buyTargetEnumObject.key = inInvoiceNodeBuyTargetBuyTargetEnum["Key"].asString();
		if(!inInvoiceNodeBuyTargetBuyTargetEnum["Value"].isNull())
			buyTargetEnumObject.value = inInvoiceNodeBuyTargetBuyTargetEnum["Value"].asString();
		inInvoice_.buyTarget.push_back(buyTargetEnumObject);
	}
	auto outInvoiceNode = value["OutInvoice"];
	auto allShellMethodNode = outInvoiceNode["ShellMethod"]["ShellMethodEnum"];
	for (auto outInvoiceNodeShellMethodShellMethodEnum : allShellMethodNode)
	{
		OutInvoice::ShellMethodEnum shellMethodEnumObject;
		if(!outInvoiceNodeShellMethodShellMethodEnum["Key"].isNull())
			shellMethodEnumObject.key = outInvoiceNodeShellMethodShellMethodEnum["Key"].asString();
		if(!outInvoiceNodeShellMethodShellMethodEnum["Value"].isNull())
			shellMethodEnumObject.value = outInvoiceNodeShellMethodShellMethodEnum["Value"].asString();
		outInvoice_.shellMethod.push_back(shellMethodEnumObject);
	}

}

GetTypeListResult::Fee GetTypeListResult::getFee()const
{
	return fee_;
}

GetTypeListResult::OutInvoice GetTypeListResult::getOutInvoice()const
{
	return outInvoice_;
}

GetTypeListResult::InInvoice GetTypeListResult::getInInvoice()const
{
	return inInvoice_;
}

