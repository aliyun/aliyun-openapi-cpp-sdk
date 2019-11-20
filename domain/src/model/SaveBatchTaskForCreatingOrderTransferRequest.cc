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

#include <alibabacloud/domain/model/SaveBatchTaskForCreatingOrderTransferRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForCreatingOrderTransferRequest;

SaveBatchTaskForCreatingOrderTransferRequest::SaveBatchTaskForCreatingOrderTransferRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderTransfer")
{
	setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForCreatingOrderTransferRequest::~SaveBatchTaskForCreatingOrderTransferRequest()
{}

std::vector<SaveBatchTaskForCreatingOrderTransferRequest::OrderTransferParam> SaveBatchTaskForCreatingOrderTransferRequest::getOrderTransferParam()const
{
	return orderTransferParam_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setOrderTransferParam(const std::vector<OrderTransferParam>& orderTransferParam)
{
	orderTransferParam_ = orderTransferParam;
	for(int dep1 = 0; dep1!= orderTransferParam.size(); dep1++) {
		auto orderTransferParamObj = orderTransferParam.at(dep1);
		std::string orderTransferParamObjStr = "OrderTransferParam." + std::to_string(dep1);
		setCoreParameter(orderTransferParamObjStr + ".PermitPremiumTransfer", orderTransferParamObj.permitPremiumTransfer ? "true" : "false");
		setCoreParameter(orderTransferParamObjStr + ".AuthorizationCode", orderTransferParamObj.authorizationCode);
		setCoreParameter(orderTransferParamObjStr + ".DomainName", orderTransferParamObj.domainName);
		setCoreParameter(orderTransferParamObjStr + ".RegistrantProfileId", std::to_string(orderTransferParamObj.registrantProfileId));
	}
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getCouponNo()const
{
	return couponNo_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

bool SaveBatchTaskForCreatingOrderTransferRequest::getUseCoupon()const
{
	return useCoupon_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setUseCoupon(bool useCoupon)
{
	useCoupon_ = useCoupon;
	setCoreParameter("UseCoupon", useCoupon ? "true" : "false");
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getPromotionNo()const
{
	return promotionNo_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setPromotionNo(const std::string& promotionNo)
{
	promotionNo_ = promotionNo;
	setCoreParameter("PromotionNo", promotionNo);
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForCreatingOrderTransferRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveBatchTaskForCreatingOrderTransferRequest::getUsePromotion()const
{
	return usePromotion_;
}

void SaveBatchTaskForCreatingOrderTransferRequest::setUsePromotion(bool usePromotion)
{
	usePromotion_ = usePromotion;
	setCoreParameter("UsePromotion", usePromotion ? "true" : "false");
}

