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

#include <alibabacloud/imm/model/ConvertOfficeFormatRequest.h>

using AlibabaCloud::Imm::Model::ConvertOfficeFormatRequest;

ConvertOfficeFormatRequest::ConvertOfficeFormatRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ConvertOfficeFormat")
{}

ConvertOfficeFormatRequest::~ConvertOfficeFormatRequest()
{}

std::string ConvertOfficeFormatRequest::getSrcType()const
{
	return srcType_;
}

void ConvertOfficeFormatRequest::setSrcType(const std::string& srcType)
{
	srcType_ = srcType;
	setCoreParameter("SrcType", srcType);
}

std::string ConvertOfficeFormatRequest::getModelId()const
{
	return modelId_;
}

void ConvertOfficeFormatRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

std::string ConvertOfficeFormatRequest::getProject()const
{
	return project_;
}

void ConvertOfficeFormatRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

long ConvertOfficeFormatRequest::getMaxSheetRow()const
{
	return maxSheetRow_;
}

void ConvertOfficeFormatRequest::setMaxSheetRow(long maxSheetRow)
{
	maxSheetRow_ = maxSheetRow;
	setCoreParameter("MaxSheetRow", maxSheetRow);
}

long ConvertOfficeFormatRequest::getMaxSheetCount()const
{
	return maxSheetCount_;
}

void ConvertOfficeFormatRequest::setMaxSheetCount(long maxSheetCount)
{
	maxSheetCount_ = maxSheetCount;
	setCoreParameter("MaxSheetCount", maxSheetCount);
}

long ConvertOfficeFormatRequest::getEndPage()const
{
	return endPage_;
}

void ConvertOfficeFormatRequest::setEndPage(long endPage)
{
	endPage_ = endPage;
	setCoreParameter("EndPage", endPage);
}

std::string ConvertOfficeFormatRequest::getTgtFileSuffix()const
{
	return tgtFileSuffix_;
}

void ConvertOfficeFormatRequest::setTgtFileSuffix(const std::string& tgtFileSuffix)
{
	tgtFileSuffix_ = tgtFileSuffix;
	setCoreParameter("TgtFileSuffix", tgtFileSuffix);
}

bool ConvertOfficeFormatRequest::getPdfVector()const
{
	return pdfVector_;
}

void ConvertOfficeFormatRequest::setPdfVector(bool pdfVector)
{
	pdfVector_ = pdfVector;
	setCoreParameter("PdfVector", pdfVector);
}

std::string ConvertOfficeFormatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ConvertOfficeFormatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ConvertOfficeFormatRequest::getSheetOnePage()const
{
	return sheetOnePage_;
}

void ConvertOfficeFormatRequest::setSheetOnePage(bool sheetOnePage)
{
	sheetOnePage_ = sheetOnePage;
	setCoreParameter("SheetOnePage", sheetOnePage);
}

std::string ConvertOfficeFormatRequest::getPassword()const
{
	return password_;
}

void ConvertOfficeFormatRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

long ConvertOfficeFormatRequest::getStartPage()const
{
	return startPage_;
}

void ConvertOfficeFormatRequest::setStartPage(long startPage)
{
	startPage_ = startPage;
	setCoreParameter("StartPage", startPage);
}

long ConvertOfficeFormatRequest::getMaxSheetCol()const
{
	return maxSheetCol_;
}

void ConvertOfficeFormatRequest::setMaxSheetCol(long maxSheetCol)
{
	maxSheetCol_ = maxSheetCol;
	setCoreParameter("MaxSheetCol", maxSheetCol);
}

std::string ConvertOfficeFormatRequest::getTgtType()const
{
	return tgtType_;
}

void ConvertOfficeFormatRequest::setTgtType(const std::string& tgtType)
{
	tgtType_ = tgtType;
	setCoreParameter("TgtType", tgtType);
}

std::string ConvertOfficeFormatRequest::getRegionId()const
{
	return regionId_;
}

void ConvertOfficeFormatRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ConvertOfficeFormatRequest::getFitToPagesWide()const
{
	return fitToPagesWide_;
}

void ConvertOfficeFormatRequest::setFitToPagesWide(bool fitToPagesWide)
{
	fitToPagesWide_ = fitToPagesWide;
	setCoreParameter("FitToPagesWide", fitToPagesWide);
}

bool ConvertOfficeFormatRequest::getHidecomments()const
{
	return hidecomments_;
}

void ConvertOfficeFormatRequest::setHidecomments(bool hidecomments)
{
	hidecomments_ = hidecomments;
	setCoreParameter("Hidecomments", hidecomments);
}

std::string ConvertOfficeFormatRequest::getTgtFilePrefix()const
{
	return tgtFilePrefix_;
}

void ConvertOfficeFormatRequest::setTgtFilePrefix(const std::string& tgtFilePrefix)
{
	tgtFilePrefix_ = tgtFilePrefix;
	setCoreParameter("TgtFilePrefix", tgtFilePrefix);
}

bool ConvertOfficeFormatRequest::getFitToPagesTall()const
{
	return fitToPagesTall_;
}

void ConvertOfficeFormatRequest::setFitToPagesTall(bool fitToPagesTall)
{
	fitToPagesTall_ = fitToPagesTall;
	setCoreParameter("FitToPagesTall", fitToPagesTall);
}

std::string ConvertOfficeFormatRequest::getSrcUri()const
{
	return srcUri_;
}

void ConvertOfficeFormatRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", srcUri);
}

std::string ConvertOfficeFormatRequest::getTgtFilePages()const
{
	return tgtFilePages_;
}

void ConvertOfficeFormatRequest::setTgtFilePages(const std::string& tgtFilePages)
{
	tgtFilePages_ = tgtFilePages;
	setCoreParameter("TgtFilePages", tgtFilePages);
}

std::string ConvertOfficeFormatRequest::getTgtUri()const
{
	return tgtUri_;
}

void ConvertOfficeFormatRequest::setTgtUri(const std::string& tgtUri)
{
	tgtUri_ = tgtUri;
	setCoreParameter("TgtUri", tgtUri);
}

